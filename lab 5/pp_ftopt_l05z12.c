/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj funkcje palindrom(), kt�ra:
- pobiera od uzytkownika jeden argument - tablice znakow (napis)
- sprawdza czy podana przez uztkownika tablica jest palindromem, tzn. zdanie czytane w przod i wspak brzmi tak samo, np.
zdanie: A to idiota jest palindromem (zauwaz, ze ignorujemy spacje oraz wielkosc liter)
- zwraca 1 gdy podane napisy sa swoimi palindromami, lub 0 gdy nie sa

Napisz program, kt�ry wczytuje wpisany przez u�ytkownika napis, a nast�pnie sprawdza, z dok�adno�ci� co do spacji,
czy jest on palindromem (zdanie czytane wprost i wspak jest w ten sam spos�b, np. kajak). Pami�taj o ignorowaniu bia�ych znak�w,
na przyk�ad s�owo abb b ba w tym rozumieniu tak�e b�dzie palindromem.

Zademonstruj dzialanie tej funkcji: napisz program, kt�ry wywoluje ja dla
testowych danych.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wynik�w
dla wskazanych w funkcji testowej przypadk�w.

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

