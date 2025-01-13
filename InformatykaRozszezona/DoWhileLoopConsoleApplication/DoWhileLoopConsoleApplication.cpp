// DoWhileLoopConsoleApplication.cpp 

#include <iostream>

//Napisz program, który wylosuje liczbê a u¿ytkownik ma j¹ zgadn¹æ.
void task1()
{
	srand(time(NULL));

	int randomNumber;
	randomNumber = rand() % 101;

	std::cout << randomNumber << "\n";

	int numberFromUser;
	/*
	std::cout << "Podaj liczbê:\n";
	std::cin >> numberFromUser;
	if (numberFromUser == randomNumber)
		std::cout << "Gratulacje !!!";

	if (numberFromUser != randomNumber)
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> numberFromUser;
		if (numberFromUser == randomNumber)
			std::cout << "Gratulacje !!!";

		if (numberFromUser != randomNumber)
		{
			std::cout << "Podaj liczbê:\n";
			std::cin >> numberFromUser;
			if (numberFromUser == randomNumber)
				std::cout << "Gratulacje !!!";

			if (numberFromUser != randomNumber)
			{
				//i tak dalej....
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> numberFromUser;
		if (numberFromUser == randomNumber)
			std::cout << "Gratulacje !!!";
	} while (numberFromUser != randomNumber);

}

int main()
{
	task1();
}
