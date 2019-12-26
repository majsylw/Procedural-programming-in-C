/*Programowanie proceduralne
grupa P00-33a
4.03.2019 Laboratorium 1
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcj� suma(), kt�ra:
- pobiera od uzytkownika dwie liczby typu ca�kowitego,
- wylicza ich sum�,
- zwraca wynik w postaci liczby ca�kowitej.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzia�anie swojej funkcji poprzez
zweryfikowanie otrzymanych wynik�w
dla wskazanych w funkcji testowej przypadk�w.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------

*/

/* Komentarz: */


#include <stdio.h> // zaimportowanie biblioteki do komunikacji narzedzia wejscia/wyjscia

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
    if(suma(1,2) == 3){
        printf("1 -> pass\n");
    }
    else{
        printf("1 -> error!!!\n");
    }
    if(suma(-2,3) == 1)
        printf("2 -> pass\n");
    else
        printf("2 -> error!!!\n");
    suma(-2,-3) == -5 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}

