/*Programowanie proceduralne
grupa P00-33a
11.03.2019 Laboratorium 3
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcje iloczyn_iteracyjnie(), kt�ra:
- pobiera od uzytkownika jeden argument - dodatnia liczbe calkowita
- oblicza w sposob iteracyjny iloczyn kolejnych liczb rozpoczynajac od 1 i konczac na podanej przez uzytkownika liczbie (jest to silnia tej liczby)
- zwraca wynik w postaci liczby calkowitej.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wynik�w
dla wskazanych w funkcji testowej przypadk�w.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------
Przyklad wywolania:
Podaj liczbe: 3

Wynik: 6

*/

/* Komentarz: */


#include <stdio.h> // zaimportowanie biblioteki do komunikacji narzedzia wejscia/wyjscia

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
    if(iloczyn_iteracyjnie(3) == 6){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n %d\n", iloczyn_iteracyjnie(3));
    }
    if(iloczyn_iteracyjnie(5) == 120)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n\n");
    iloczyn_iteracyjnie(4) == 24 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}


