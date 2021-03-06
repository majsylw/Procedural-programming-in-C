/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj funkcje znajdz_unikatowe(), kt�ra:
- pobiera od uzytkownika dwa argumenty - tablice majaca przechowywac liczby calkowite, jej rozmiar (liczba calkowita) bedacy zawsze liczba nieparzysta
- zlicza ile elementow w tablicy wystepuje nie bez powtorzen, np.
tab[5] = {1,2,1,4,2}
Posiada 5 elementow, ale tylko 1 unikatowy -> 4
- zwraca liczbe elementow unikatowych w tablicy

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
    int tab1[] = {1,3,1,2,3};
    int tab2[] = {3,9,3,7,2,9,2,3,3};
    int tab3[] = {2,1};
    int tab4[] = {1,2,2,3};


    if(znajdz_unikatowe(tab1,5) == 1){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(znajdz_unikatowe(tab2,9) == 1)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n \n");
    znajdz_unikatowe(tab3,2) == 2 ? printf("3 -> pass\n\n") : printf("3 -> error!!!\n\n");
    znajdz_unikatowe(tab4,4) == 2 ? printf("4 -> pass\n") : printf("4 -> error!!!\n");
}
