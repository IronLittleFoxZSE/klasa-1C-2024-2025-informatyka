// VariableConsoleApplication.cpp 

#include <iostream>

int main()
{
    /*
    Deklaracja zmiennej:

    typZmiennej nazwaZmiennej;

    Zasady tworzenia identyfikator�w:
    1. Wymagane przez kompilator:
        * dozwolone znaki:
            - alfabet angielski du�e A-Z lub/i ma�e litery a-z 
            - cyfry arabskie 0-9
            - podkre�lenie _
        * pierwszym znakiem nie mo�e by� cyfra
        * nie mo�e byc to s�owo kluczowe danego jezyka
        * musi by� unikalna w swojej widoczno�ci
    2. Zasady programist�w:
        * nazwa musi oddawa� charakter przechowywanych danych
        * nazwy po angielsku
        * nazwy z wielu wyraz�w:
            - snake case => name_from_user
            - camel case => nameFromUser
            - pascal case => NameFromUser

    Typy liczbowe:
        * ca�kowitoliczbowe
            - short     2 bajty     <-32 768; 32 767>
            - int       2/4 bajty   <-2 147 483 648; 2 147 483 647>
            - long      4 bajty     <-2 147 483 648; 2 147 483 647>
            - long long 8 bajt�w    <-9 223 372 036 854 775 808; 9 223 372 036 854 775 807>
    */

    std::cout << "Podaj imie:\n";
    std::string nameFromUser;
    std::cin >> nameFromUser;

    std::cout << "Podaj wiek:\n";
    short ageFromUser;
    std::cin >> ageFromUser;
    
    short ageInFuture;
    ageInFuture = ageFromUser + 10;

    std::cout << "Witaj " << nameFromUser << " tutaj!\n";
    std::cout << "Masz " << ageFromUser << " lat\n";
    std::cout << "Za 10 lat b�dziesz mia� " << ageInFuture << " lat\n";
}
