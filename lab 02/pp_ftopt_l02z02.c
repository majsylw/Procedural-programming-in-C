/*Programowanie proceduralne
grupa P00-33a
4.03.2019 Laboratorium 1
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcj� iloczyn(), kt�ra:
- pobiera od uzytkownika dwie liczby typu ca�kowitego,
- wylicza ich iloczyn,
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
    if(iloczyn(1,2) == 2){
        printf("1 -> pass\n");
    }
    else{
        printf("1 -> error!!!\n");
    }
    if(iloczyn(-2,3) == -6)
        printf("2 -> pass\n");
    else
        printf("2 -> error!!!\n");
    iloczyn(-2,-3) == 6 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}

