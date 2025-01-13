// IfStatementConsoleApplication.cpp 

#include <iostream>

/*
Operatory por�wnania:
	> - wi�kszo�ci
	< - mniejszo�ci
	>= - wieksze b�d� r�wne
	<= - mniejsze b�d� r�wne
	== - r�wne
	!= - r�ne

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

//Napisz program, kt�ry wy�wielli informacje 
//czy liczba jest dodatnia czy ujemna.
void task1()
{
	//pobranie danych
	int numberFromUser;
	std::cout << "Podaj liczb�:\n";
	std::cin >> numberFromUser;

	//wy�wietlenie informacji

	if (numberFromUser > 0)
		std::cout << "Liczba jest dodatnia\n";

	if (numberFromUser < 0)
		std::cout << "Liczba jest ujemna\n";

	if (numberFromUser == 0)
		std::cout << "Liczba nie jest ani dodatnia ani ujemna\n";
}

//Napisz program, kt�ry sprawdzi czy liczba jest parzysta
void task2()
{
	// pobranie danych
	int numberFromUser;
	std::cout << "Podaj liczb�:\n";
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

//Sprawd� czy liczba jest z zakresu <1; 10)
void task3()
{
	int numberFromUser;
	std::cout << "Podaj liczb�:\n";
	std::cin >> numberFromUser;

	if (numberFromUser >= 1 && numberFromUser < 10)
		std::cout << "Liczba jest z zakresu\n";
	else
		std::cout << "Liczba nie jest z zakresu\n";
}

/*
*.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia.
Wy�wietl odpowiedni komunikat.

*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�.
Wy�wietl wynik.

*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.

*. Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.

*. Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny.
Wy�wietl odpowiedni komunikat.

*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi,
czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.

*/

// Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne. Wy�wietl odpowiedni komunikat.
void task4()
{

}

//Napisz program, kt�ry wylosuje liczb� a u�ytkownik ma j� zgadn��.
void task()
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

int main()
{
	setlocale(LC_CTYPE, "polish");

	//task1();
	//task2();
	//task3();
	//task4();

	task1();
}
