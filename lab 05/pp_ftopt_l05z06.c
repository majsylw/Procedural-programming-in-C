/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj funkcje czy_parzyste(), która:
- pobiera od uzytkownika dwa argumenty - tablice majaca przechowywac liczby calkowite oraz jej rozmiar (liczba calkowita)
- sprawdza czy wszystkie z liczb wypelniajacych tablice sa parzyste
- zwraca 1 gdy wszystkie liczby beda parzyste, lub 0 gdy chociaz jedna z nich bedzie nieparzysta

Zademonstruj działanie tej funkcji: napisz program, który wywołuje ja dla
testowych danych.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------

*/

/* Komentarz: */


#include <stdio.h> // zaimportowanie biblioteki do komunikacji narzedzia wejscia/wyjscia
#include <stdlib.h> // biblioteka niezbedna do wykorzystania funkcji losujacej cyfry

//miejsce na deklaracje twojej funkcji - pamietaj o odpowiednich typach zwracanej wartosci i typach argumentow oraz o nazwie funkcji
//.........

void testy(); // deklaracja funkcji testujacej, tej linii nie modyfikuj


int main(){
    // miejsce na interakcje z uzytkownikiem
    //...........
    //...........

    testy();
    return 0;
}

//miejsce na definicje twojej funkcji
//.................


//zawartosci ponizszej funkcji nie modyfikuj
void testy(){
    int tab1[] = {2,1,3};
    int tab2[] = {1,5};
    int tab3[] = {2,4,6,4,8};



    if(czy_parzyste(tab1,3) == 0){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(czy_parzyste(tab2,2) == 0)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n \n");
    czy_parzyste(tab3,5) == 1 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}
