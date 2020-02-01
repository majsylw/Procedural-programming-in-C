/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj funkcje iloczyn_tablicy(), która:
- pobiera od uzytkownika trzy argumenty - tablice majaca przechowywac liczby calkowite, jej rozmiar (liczba calkowita) oraz dzielnik (liczba calkowita)
- przemna¿a przez siebie wszystkie liczby mieszczace sie w tablicy i sprawdza czy dany iloczyn jest podzielny przez dzielnik
- zwraca wynik w postaci 1 gdy iloczyn jest podzielny, lub 0 gdy nie jest podzielny przez dzielnik

Zademonstruj dzialanie tej funkcji: napisz program, który wywoluje ja dla
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
    int tab1[] = {6,3,1};
    int tab2[] = {1,5};
    int tab3[] = {12,4,4,8};


    if(iloczyn_tablicy(tab1,3, 2) == 1){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(iloczyn_tablicy(tab2,2, 5) == 1)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n \n");
    iloczyn_tablicy(tab3,4, 5) == 0 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}
