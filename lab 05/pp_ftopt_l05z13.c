/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj wyzeruj_wybrane(), która:
- pobiera od uzytkownika trzy argumenty - tablice majaca przechowywac liczby calkowite, jej rozmiar (liczba calkowita) oraz przesuniecie (liczba calkowita)
- porusza sie po tablicy od lewej do prawej zerujac elementy, co przesuniecie, tzn. jesli zaczniesz od elementu na pozycji 0 to nastepny element wyzerowany znajdzie sie na pozycji 0 + przesuniecie, np.
tab[5] = {1,3,4,6}
wyzeruj_wybrane(tab,5,2)
Dostaniemy tablice: [0, 3, 0, 6] poniewaz zerujemy co 2 element
- nic nie zwraca

Zademonstruj dzialanie tej funkcji: napisz program, który wywoluje ja dla
testowych danych.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

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
    int i;
    int tab1[] = {1,7,1,2,3};
    int tab2[] = {3,2,7,6,1,8,4,5,9};

    wyzeruj_wybrane(tab1, 5, 2);
    for(i=0; i<5; i++)
        printf("%d ", tab1[i]);
    printf("\n");

    wyzeruj_wybrane(tab2, 9, 4);
    for(i=0; i<9; i++)
        printf("%d ", tab2[i]);
    printf("\n");

}
