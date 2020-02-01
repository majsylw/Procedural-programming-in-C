/*Programowanie proceduralne
grupa P00-33a
4.03.2019 Laboratorium 1
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcjê procent(), która:
- pobiera od uzytkownika jedna liczbe calkowita,
- wylicza ile to procent,
- zwraca wynik w postaci liczby calkowitej.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzia³anie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------

*/

/* Komentarz: */


#include <stdio.h> // zaimportowanie biblioteki do komunikacji narzedzia wejscia/wyjscia
#include <math.h> // wczytana w celu wykorzystania funkcji fabs w testach

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
    if(procent(2) == 200){
        printf("1 -> pass\n");
    }
    else{
        printf("1 -> error!!!\n");
    }
    if(procent(1) == 100)
        printf("2 -> pass\n");
    else
        printf("2 -> error!!!\n");
    procent(-1) == -100 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}



