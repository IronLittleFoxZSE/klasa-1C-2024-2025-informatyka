// DoWhileLoopConsoleApplication.cpp 

#include <iostream>

//Napisz program, kt�ry wylosuje liczb� a u�ytkownik ma j� zgadn��.
void task1()
{
	srand(time(NULL));

	int randomNumber;
	randomNumber = rand() % 101;

	std::cout << randomNumber << "\n";

	int numberFromUser;
	/*
	std::cout << "Podaj liczb�:\n";
	std::cin >> numberFromUser;
	if (numberFromUser == randomNumber)
		std::cout << "Gratulacje !!!";

	if (numberFromUser != randomNumber)
	{
		std::cout << "Podaj liczb�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser == randomNumber)
			std::cout << "Gratulacje !!!";

		if (numberFromUser != randomNumber)
		{
			std::cout << "Podaj liczb�:\n";
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
		std::cout << "Podaj liczb�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser == randomNumber)
			std::cout << "Gratulacje !!!";
	} while (numberFromUser != randomNumber);

}

//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task2()
{
	int numberFromUser;

	do 
	{
		std::cout << "Podaj liczb� dodatnia:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "Liczba dodatnia podana przez uzytkownika " << numberFromUser << "\n";
}

//Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
void task3()
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	int rest, sum = 0;

	/*
	rest = number % 10;
	sum = sum + rest;
	number = number / 10;
	if (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
		if (number != 0)
		{
			//....
		}
	}
	*/

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma wynosi " << sum << "\n";
}

int main()
{
	task1();
}
