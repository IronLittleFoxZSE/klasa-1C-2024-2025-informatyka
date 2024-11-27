// VariableConsoleApplication.cpp 

#include <iostream>

int main()
{
    /*
    Deklaracja zmiennej:

    typZmiennej nazwaZmiennej;

    Zasady tworzenia identyfikatorów:
    1. Wymagane przez kompilator:
        * dozwolone znaki:
            - alfabet angielski du¿e A-Z lub/i ma³e litery a-z 
            - cyfry arabskie 0-9
            - podkreœlenie _
        * pierwszym znakiem nie mo¿e byæ cyfra
        * nie mo¿e byc to s³owo kluczowe danego jezyka
        * musi byæ unikalna w swojej widocznoœci
    2. Zasady programistów:
        * nazwa musi oddawaæ charakter przechowywanych danych
        * nazwy po angielsku
        * nazwy z wielu wyrazów:
            - snake case => name_from_user
            - camel case => nameFromUser
            - pascal case => NameFromUser

    Typy liczbowe:
        * ca³kowitoliczbowe
            - short     2 bajty     <-32 768; 32 767>
            - int       2/4 bajty   <-2 147 483 648; 2 147 483 647>
            - long      4 bajty     <-2 147 483 648; 2 147 483 647>
            - long long 8 bajtów    <-9 223 372 036 854 775 808; 9 223 372 036 854 775 807>
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
    std::cout << "Za 10 lat bêdziesz mia³ " << ageInFuture << " lat\n";
}
