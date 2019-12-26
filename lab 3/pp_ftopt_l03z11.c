/*Programowanie proceduralne
grupa P00-33a
11.03.2019 Laboratorium 3
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcjê rysuj_trojkat(), która:
- pobiera od uzytkownika dwa argumenty: wysokosc trojkata (liczba calkowita) oraz znak, jaki ma zostac wykorzystany do narysowania trojkata
- rysuje na ekranie trójkąt prostokątny, równoramienny, wypełniony określonym znakiem,
- zwraca pole narysowanego trojkata prostokatnego w postaci liczby rzeczywistej.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzia³anie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------
Przyklad wywolania:
Podaj wysokosc: 3
Podaj znak: *

*
**
***

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
    if(rysuj_trojkat(1,'*') == 0.5){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(rysuj_trojkat(1, '-') == 0.5)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n\n");
    rysuj_trojkat(5, 'o') == 12.5 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}

