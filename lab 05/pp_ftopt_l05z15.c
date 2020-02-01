/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj funkcje dominanta(), która:
- pobiera od uzytkownika dwa argumenty - tablice majaca przechowywac liczby calkowite, jej rozmiar (liczba calkowita)
- wylicza dominante liczb w tablicy (dominanta jest to najczesciej wystepujaca wartosc w tablicy, aby ulatwic sobie zadanie na poczatku posortuj tablice).
- zwraca wyliczona dominante

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
    int tab1[] = {1,7,1,2,1};
    int tab2[] = {3,2,7,6,8,8,4,8,9};
    int tab3[] = {2};
    int tab4[] = {1,2,1};


    if(dominanta(tab1,5) == 1){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(dominanta(tab2,9) == 8)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n \n");
    dominanta(tab3,1) == 2 ? printf("3 -> pass\n\n") : printf("3 -> error!!!\n\n");
    dominanta(tab4,3) == 1 ? printf("4 -> pass\n") : printf("4 -> error!!!\n");
}
