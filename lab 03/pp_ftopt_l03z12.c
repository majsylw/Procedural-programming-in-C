/*Programowanie proceduralne
grupa P00-33a
11.03.2019 Laboratorium 3
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcjê zmien_wartosc(), która:
- pobiera od uzytkownika jeden argument przez referencje: liczbe calkowita
- zwieksza wartosc liczby o 2
- nie zwraca wyniku

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------
Przyklad wywolania:
Podaj liczbe: 3

Wynik: 5

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
    int a = 5, b = 10, c = -2;
    zmien_wartosc(&a);
    zmien_wartosc(&b);
    zmien_wartosc(&c);

    if(a == 7){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!! -> %d \n\n", a);
    }
    if(b == 12)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n\n");
    c == 0 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}


