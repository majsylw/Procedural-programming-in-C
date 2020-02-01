/*Programowanie proceduralne
grupa P00-33a
11.03.2019 Laboratorium 3
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcjê rysuj_prostokat(), która:
- pobiera od uzytkownika trzy argumenty: wysokosc prostokata (liczba calkowita), szerokosc prostokata (liczba calkowita) oraz znak, jaki ma zostac wykorzystany do narysowania trojkata
- rysuje na ekranie trójkąt prostokątny, równoramienny, wypełniony określonym znakiem,
- zwraca podana pole powstalego prostokata w postaci liczby calkowitej.

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
Podaj szerokosc: 3
Podaj znak: *

***
***
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
    if(rysuj_prostokat(1,2,'*') == 2){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(rysuj_prostokat(1, 3,'-') == 3)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n\n");
    rysuj_prostokat(5, 4, 'o') == 20 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}

