#include <iostream>

int generateRandom()
{
	srand(time(0)); // srand generuje nahodny seed na zaklade aktualniho casu => time(0) 
	int random = rand() % 6; // pokud bychom negenerovali nahodny seed, nahodna cisla by se pri kazdem spusteni programu generovala stejne
	return random;			// "% 6" pak udava rozsah generovanych cisel na 1 - 6, metoda rand() jinak generuje cisla v mnohem vetsim rozsahu
}

int main()
{
	while (true)
	{
		int userGuess, random;
		std::cout << "Zkus uhodnout cislo od 1 do 6: ";
		std::cin >> userGuess;
		random = generateRandom();
		std::cout << "Souper hodil: " << random << "\n";
		if (userGuess == random)
		{
			std::cout << "Uhodl jsi! \n";
		}
		std::cout << "Vedle \n";
	}
}

