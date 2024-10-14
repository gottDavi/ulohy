#include <iostream>
#include <vector>

class User
{
public:
    int userId;
    std::string fistName;
    std::string lastName;
    int userPIN;
    int accountBalance = 1000;

    User(int userId, std::string firstName, std::string lastName, int userPIN)
    {
        this -> userId = userId;
        this -> fistName = firstName;
        this -> lastName = lastName;
        this->userPIN = userPIN;
    }
};
User findUser(std::vector<User> data, std::string name)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data.at(i).lastName == name)
        {
            return data.at(i);
        }
    }
    return User(0, "", "", 0);
}
std::vector<User> sendMoney(User sender, User reciever, int amount)
{
    if (reciever.fistName == "" && reciever.lastName == "")
    {
        std::cout << "User doesnt exist \n";
        return std::vector<User> {};
    }
    if (sender.accountBalance >= amount)
    {
        sender.accountBalance -= amount;
        reciever.accountBalance += amount;
        return std::vector<User> {sender, reciever};
    }
    if (sender.accountBalance < amount)
    {
        std::cout << "You dont have enough money \n";
        return std::vector<User> {};
    }
    return std::vector<User> {};

}
int main()
{
    std::vector<User> users = { User(1, "David", "Boe", 1234), User(2, "Joe", "Biden", 4321)};
    while (true)
    {
        std::string userLastName, recieverName;
        int userPIN, sendAmount;
        std::cout << "To log into your account enter your lastname: ";
        std::cin >> userLastName;
        std::cout << "\n Enter your PIN: ";
        std::cin >> userPIN;
        User currentUser = findUser(users, userLastName);
        User reciever = User(0, "", "", 0000);
        std::vector<User> changedUsers;
        if (currentUser.fistName == "" && currentUser.lastName == "")
        {
            std::cout << "User not found" << "\n";
            continue;
        }
        if (currentUser.lastName == userLastName && currentUser.userPIN == userPIN)
        {
            std::cout << "Welcome back " << currentUser.fistName << "! \n";
            bool logout = false;
            while (!logout)
            {
                int userAction;
                std::cout << "Choose an action: \n";
                std::cout << "1 - Send money \n";
                std::cout << "2 - Check balance \n";
                std::cout << "3 - Log out \n";
                std::cin >> userAction;

                switch (userAction)
                {
                case 1:
                    std::cout << "Enter the name of the reciever: ";
                    std::cin >> recieverName;
                    std::cout << "Enter the amount to send: ";
                    std::cin >> sendAmount;
                    reciever = findUser(users, recieverName);
                    changedUsers = sendMoney(currentUser, reciever, sendAmount);
                    for (int i = 0; i < users.size(); i++)
                    {
                        for (int e = 0; e < changedUsers.size(); e++)
                        {
                            if (users[i].lastName == changedUsers[e].lastName)
                            {
                                users[i] = changedUsers[e];
                            }
                        }
                    }
                    break;
                case 2: 
                    std::cout << "Your current balance is " << currentUser.accountBalance << "\n";
                    break;
                case 3:
                    logout = true;
                    break;
                default:
                    std::cout << "Invalid action";
                }
                break;
            }
        }
    }
}

