/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj funkcje czy_permutacja(), kt�ra:
- pobiera od uzytkownika dwa argumenty - tablice majaca przechowywac liczby calkowite, jej rozmiar (liczba calkowita)
- sprawdza czy podana tablica jest permutacja jej rozmiaru n, tzn. czy zawiera wszystkie liczby od 1 do n, np.
tab[9] = {3,2,7,6,1,8,4,5,9}
Jest permutacja, bo jej elementami sa wszystkie liczby od 1 do 9, gdzie 9 jest rozmiarem tej tablicy.
- zwraca 1 gdy podana jako argument tablica jest permutacja, 0 gdy nia nie jest

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
    int tab1[] = {1,7,1,2,3};
    int tab2[] = {3,2,7,6,1,8,4,5,9};
    int tab3[] = {2};
    int tab4[] = {1,2,3};


    if(czy_permutacja(tab1,5) == 0){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(czy_permutacja(tab2,9) == 1)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n \n");
    czy_permutacja(tab3,1) == 0 ? printf("3 -> pass\n\n") : printf("3 -> error!!!\n\n");
    czy_permutacja(tab4,3) == 1 ? printf("4 -> pass\n") : printf("4 -> error!!!\n");
}
