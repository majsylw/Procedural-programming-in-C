/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj funkcje palindrom(), która:
- pobiera od uzytkownika jeden argument - tablice znakow (napis)
- sprawdza czy podana przez uztkownika tablica jest palindromem, tzn. zdanie czytane w przod i wspak brzmi tak samo, np.
zdanie: A to idiota jest palindromem (zauwaz, ze ignorujemy spacje oraz wielkosc liter)
- zwraca 1 gdy podane napisy sa swoimi palindromami, lub 0 gdy nie sa

Napisz program, który wczytuje wpisany przez u¿ytkownika napis, a nastêpnie sprawdza, z dok³adnoœci¹ co do spacji,
czy jest on palindromem (zdanie czytane wprost i wspak jest w ten sam sposób, np. kajak). Pamiêtaj o ignorowaniu bia³ych znaków,
na przyk³ad s³owo abb b ba w tym rozumieniu tak¿e bêdzie palindromem.

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
#include <ctype.h>
#include <string.h>

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
    char tab1[] = "kajak";
    char tab2[] = "skopianki";
    char tab3[] = "A to idiota";


    if(palindrom(tab1) == 1){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(palindrom(tab2) == 0)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n \n");
    palindrom(tab3) == 1 ? printf("3 -> pass\n\n") : printf("3 -> error!!!\n\n");
}

