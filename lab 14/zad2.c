/*Programowanie proceduralne
grupa P00-33a
10.06.2019 Kolokwium zaliczeniowe
imie:
nazwisko:
indeks:
*/

/* Zadanie 2 (10 pkt.)

Jednym z algorytmów sortowania jest Bozosort - algorytm oparty na metodzie prob i bledow.
Polega on na ciaglym losowym zamienianiu miejscami dwoch dowolnych elementow w tablicy,
Napisz program, który posortuje w ten sposob tablice wypelniona liczbami calkowitymi.

W tym celu zaimplementuj funkcje bozosort(), ktora:
- pobiera dwa argumenty - tablice majaca przechowywac liczby calkowite oraz jej rozmiar (liczba calkowita)
- sortuje rosnaco elementy tablicy wedlug ponizszego algorytmu:
    W zmniennej flaga przechowujemy informacje
    o tym czy tablica jest prawidlowo posortowana
    1) Poczatkowo ustaw wartosc flagi na 1
    2) Jesli tablica nie jest posortowana przechodzimy
       przez nia uzywajac zmiennej pomocniczej i
       do odliczania elementow w tablicy
        3) Jesli element i-1 jest wiekszy od elementu i to ustaw
           wartosc flagi na 0 i calkowicie wyjdz z petli
    4) Jesli tablica jest nieposortowana (wartosc flagi jest rowna 0)
       wylosuj indeksy elementow do zamiany, a nastepnie
       zamien ze soba dwa losowe elementy w tablicy uzywajac funkcji swap
    Cztery powyzsze kroki wykonuj tak dlugo
    az tablica zostanie posortowana (wartosc flagi bedzie rowna 1)
- nic nie zwraca

W programie zadeklarowano i zdefiniowano tez inne funkcje pomocnicze:
void swap(int tab[], int i, int j);
void testy();
Nie modyfikuj ich!

Pracuj jedynie w definicji funkcji void bozosort(int tab[], int n).

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------

*/
/* /10pkt */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Funkcja zamienia miejscami elementy na pozycjach i oraz j
//w n-elementowej tablicy liczb calkowitych tab.
void swap(int tab[], int i, int j);

//Funkcja sortuje rosnaco n-elementowa tablice liczb calkowitych tab.
void bozosort(int tab[], int n);

// deklaracja funkcji testujacej, tej linii nie modyfikuj
void testy();

//zawartosci ponizszej funkcji nie modyfikuj
int main(){
    time_t seedd;
    srand(time(&seedd));

    testy();
    return 0;
}

void swap(int tab[], int i, int j){
    int tmp;
    tmp = tab[i];
    tab[i] = tab[j];
    tab[j] = tmp;
}

//miejsce na definicje twojej funkcji
void bozosort(int tab[], int n){
/* W zmniennej flaga przechowujemy informacje
   o tym czy tablica jest prawidlowo posortowana
   1) Poczatkowo ustaw wartosc flagi na 1
   2) Jesli tablica nie jest posortowana przechodzimy
      przez nia uzywajac zmiennej pomocniczej i
      do odliczania elementow w tablicy
       3) Jesli element i-1 jest wiekszy od elementu i to ustaw
          wartosc flagi na 0 i calkowicie wyjdz z petli
   4) Jesli tablica jest nieposortowana (wartosc flagi jest rowna 0)
      wylosuj indeksy elementow do zamiany, a nastepnie
      zamien ze soba dwa losowe elementy w tablicy uzywajac funkcji swap
   Cztery powyzsze kroki wykonuj tak dlugo
   az tablica zostanie posortowana (wartosc flagi bedzie rowna 1)
*/

    int flaga; // 0.5pkt
    do{
        flaga = 1; // 0.5pkt
        int i;
        for(i = 1; i < n; ++i) // 2pkt
        {
            if(tab[i-1] > tab[i]){ // 1pkt
                flaga = 0; // 0.5pkt
                break; // 0.5pkt
            }
        }
        if(flaga == 0){ // 1pkt
            int t = rand() % n; // 0.5pkt
            int r = rand() % n; // 0.5pkt
            swap(tab, t, r); // 1pkt
        }
    }while(!flaga); // 2pkt
}


//zawartosci ponizszej funkcji nie modyfikuj
void testy(){
    int i;
    int tab1[] = {6,3,1};
    int tab2[] = {1,5};
    int tab3[] = {12,4,4,8, 11, 2, 104, 123, 349};

    printf("Testowe tablice po posortowaniu:\n[");
    bozosort(tab1,3);
    for(i=0; i<3; i++){
        printf("%d ", tab1[i]);
    }
    printf("]\n[");

    bozosort(tab2,2);
    for(i=0; i<2; i++){
        printf("%d ", tab2[i]);
    }
    printf("]\n[");

    bozosort(tab3,9);
    for(i=0; i<9; i++){
        printf("%d ", tab3[i]);
    }
    printf("]\n");
}
