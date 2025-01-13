// IfStatementConsoleApplication.cpp 

#include <iostream>

/*
Operatory porównania:
	> - wiêkszoœci
	< - mniejszoœci
	>= - wieksze b¹dŸ równe
	<= - mniejsze b¹dŸ równe
	== - równe
	!= - ró¿ne

Operatory logiczne:
	&& - AND
	|| - OR
	! - NOT
								  ALBO
 a	b	a && b	a || b	!a		a XOR b
 F	F	  F		   F	T			F
 F	T	  F		   T	T			T
 T	F	  F		   T	F			T
 T	T	  T		   T	F			F

 F - false
 T - true

*/

//Napisz program, który wyœwielli informacje 
//czy liczba jest dodatnia czy ujemna.
void task1()
{
	//pobranie danych
	int numberFromUser;
	std::cout << "Podaj liczbê:\n";
	std::cin >> numberFromUser;

	//wyœwietlenie informacji

	if (numberFromUser > 0)
		std::cout << "Liczba jest dodatnia\n";

	if (numberFromUser < 0)
		std::cout << "Liczba jest ujemna\n";

	if (numberFromUser == 0)
		std::cout << "Liczba nie jest ani dodatnia ani ujemna\n";
}

//Napisz program, który sprawdzi czy liczba jest parzysta
void task2()
{
	// pobranie danych
	int numberFromUser;
	std::cout << "Podaj liczbê:\n";
	std::cin >> numberFromUser;

	// sprawdzenie czy jest parzysta

	int rest = numberFromUser % 2;
	if (rest == 0)
		std::cout << "Liczba jest parzysta\n";

	if (rest != 0)
		std::cout << "Liczba jest nieparzysta\n";

	if (rest == 0)
		std::cout << "Liczba jest parzysta\n";
	else
		std::cout << "Liczba jest nieparzysta\n";
}

//SprawdŸ czy liczba jest z zakresu <1; 10)
void task3()
{
	int numberFromUser;
	std::cout << "Podaj liczbê:\n";
	std::cin >> numberFromUser;

	if (numberFromUser >= 1 && numberFromUser < 10)
		std::cout << "Liczba jest z zakresu\n";
	else
		std::cout << "Liczba nie jest z zakresu\n";
}

/*
*.
*. Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia.
Wyœwietl odpowiedni komunikat.

*. Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹.
Wyœwietl wynik.

*. Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.

*. Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i wyœwietli wiêksz¹ z nich.

*. Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny.
Wyœwietl odpowiedni komunikat.

*. Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi,
czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.

*/

// Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.
void task4()
{

}

//Napisz program, który wylosuje liczbê a u¿ytkownik ma j¹ zgadn¹æ.
void task()
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
	setlocale(LC_CTYPE, "polish");

	//task1();
	//task2();
	//task3();
	//task4();

	task1();
}
