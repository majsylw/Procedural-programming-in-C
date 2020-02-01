/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj funkcje zamien_losowo(), która:
- pobiera od uzytkownika dwa argumenty - tablice majaca przechowywac liczby calkowite, jej rozmiar (liczba calkowita)
- losowo zamienia kolejnosc jej elementow
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
#include <stdlib.h>
#include <time.h>

//miejsce na deklaracje twojej funkcji - pamietaj o odpowiednich typach zwracanej wartosci i typach argumentow oraz o nazwie funkcji
void zamien_losowo(int tab[], int n);

void testy(); // deklaracja funkcji testujacej, tej linii nie modyfikuj


int main(){
    srand(time(NULL));

    testy();
    return 0;
}

//miejsce na definicje twojej funkcji
void zamien_losowo(int tab[], int n){
    int k = rand()%n;
    int j = rand()%n;

    int a = tab[k];
    tab[k] = tab[j];
    tab[j] = a;
}


//zawartosci ponizszej funkcji nie modyfikuj
void testy(){
    int i;
    int tab1[] = {6,3,1};
    int tab2[] = {1,5};
    int tab3[] = {12,4,4,8, 11, 2, 104, 123, 349};

    printf("Tablice po zmianie miejsc:\n[");
    zamien_losowo(tab1,3);
    for(i=0; i<3; i++){
        printf("%d ", tab1[i]);
    }
    printf("]\n[");

    zamien_losowo(tab2,2);
    for(i=0; i<2; i++){
        printf("%d ", tab2[i]);
    }

    printf("]\n[");

    zamien_losowo(tab3,9);
    for(i=0; i<9; i++){
        printf("%d ", tab3[i]);
    }
    printf("]\n");
}
