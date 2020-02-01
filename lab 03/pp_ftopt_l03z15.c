/*Programowanie proceduralne
grupa P00-33a
11.03.2019 Laboratorium 3
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcje losuj_liczby(), która:
- pobiera od uzytkownika dwa argumenty - tablice majaca przechowywac liczby calkowite oraz jej rozmiar (liczba calkowita)
- wypelnia tablice cyframi losowymi (z przedzialu od 0-9)
- wypisuje na ekran wylosowane cyfry
- nic nie zwraca

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

    testy();
    return 0;
}

//miejsce na definicje twojej funkcji
//.................


//zawartosci ponizszej funkcji nie modyfikuj
void testy(){
    int tab1[3];
    int tab2[5];
    int tab3[1];

    losuj_liczby(tab1, 3); // drukuje 3 liczby losowe
    printf("\n");
    losuj_liczby(tab2, 5); // drukuje 5 liczb losowych
    printf("\n");
    losuj_liczby(tab3, 1); // drukuje 1 liczbe losowa
    printf("\n");

    printf("\n\nPo pojawieniu sie 3 linijek zawierajacych odpowiednie liczby losowe testy poszly pomyslnie!");
}



