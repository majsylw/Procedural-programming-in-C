/*Programowanie proceduralne
grupa P00-33a
11.03.2019 Laboratorium 3
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcje potega_rekurencyjnie(), która:
- pobiera od uzytkownika jeden argument - dodatnia liczbe calkowita (wykladnik potegowania n)
- oblicza w sposob rekurencyjny n-ta (posugujac sie liczba podana przez uzytkownika) potege liczby 2
- zwraca wynik w postaci liczby calkowitej.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------
Przyklad wywolania:
Podaj liczbe: 2

Wynik: 4

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
    if(potega_rekurencyjnie(3) == 8){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n %d\n", iloczyn_iteracyjnie(3));
    }
    if(potega_rekurencyjnie(5) == 32)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n\n");
    potega_rekurencyjnie(4) == 16 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}



