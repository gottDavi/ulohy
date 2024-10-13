#include <iostream>
#include <cmath>

int main()
{
	while (true)
	{
		std::string mathOperator;
		int firstNum, secondNum;
		std::cout << "1 - pro umocneni \n";
		std::cout << "2 - pro odmocneni \n";
		std::cout << "Zvol matematickou operaci: ";
		std::cin >> mathOperator;
		if (mathOperator == "1")
		{
			int cislo, mocnina, vysledek;
			std::cout << "Zadej cislo: " ;
			std::cin >> cislo;
			std::cout << "Zadej mocninu: ";
			std::cin >> mocnina;
			vysledek = pow(cislo, mocnina);
			std::cout << "Vysledek je: " << vysledek << "\n";

		}
		if (mathOperator == "2")
		{
			int cislo, vysledek;
			std::cout << "Zadej cislo: ";
			std::cin >> cislo;
			vysledek = sqrt(cislo);
			std::cout << "Vysledek je: " << vysledek << "\n";
			continue;
		}
		std::cout << "Zadej prvni cislo: ";
		std::cin >> firstNum;
		std::cout << "Zadej druhe cislo: ";
		std::cin >> secondNum;

		if (mathOperator == "+")
		{
			std::cout << "Vysledek je: " << firstNum + secondNum << "\n";
		}
		if (mathOperator == "-")
		{
			std::cout << "Vysledek je: " << firstNum - secondNum << "\n";
		}
		if (mathOperator == "*")
		{
			std::cout << "Vysledek je: " << firstNum * secondNum << "\n";
		}
		if (mathOperator == "/")
		{
			std::cout << "Vysledek je: " << firstNum / secondNum << "\n";
		}
	}
}

