/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj funkcje czy_nieparzyste(), kt�ra:
- pobiera od uzytkownika dwa argumenty - tablice majaca przechowywac liczby calkowite oraz jej rozmiar (liczba calkowita)
- sprawdza czy wszystkie z liczb wypelniajacych tablice sa nieparzyste
- zwraca 1 gdy wszystkie liczby beda nieparzyste, lub 0 gdy chociaz jedna z nich bedzie parzysta

Zademonstruj dzia�anie tej funkcji: napisz program, kt�ry wywo�uje ja dla
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
    int tab1[] = {1,2,3};
    int tab2[] = {1,5};
    int tab3[] = {2,4,6,4,8};



    if(czy_nieparzyste(tab1,3) == 0){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(czy_nieparzyste(tab2,2) == 1)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n \n");
    czy_nieparzyste(tab3,5) == 0 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}
