/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj funkcje ile_roznych(), która:
- pobiera od uzytkownika dwa argumenty - tablice majaca przechowywac liczby calkowite, jej rozmiar (liczba calkowita) bedacy zawsze liczba nieparzysta
- tworzy zbior z elementow w tablicy, to znaczy eliminuje powtorzenia elementow i zlicza ich liczbe, np.
tab[5] = {1,2,1,4,2}
Posiada 5 elementow, ale dwa z nich sie powtarzaja, wiec utworzony zbior to {1,2,4}, ktory liczy 3 elementy
- zwraca moc zbioru (czyli liczbe roznych elementow tablicy - bez powtorzen)

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
int ile_roznych(int tab[], int n);

void testy(); // deklaracja funkcji testujacej, tej linii nie modyfikuj


int main(){
    // miejsce na interakcje z uzytkownikiem
    //...........
    //...........

    testy();
    return 0;
}

//miejsce na definicje twojej funkcji
int ile_roznych(int tab[], int n){
    int i, j, ile = 0;
    int tablica_pom[n];
    for(i=0; i<n; i++){
        tablica_pom[i] = 1;
        for(j=i; j<n-1; j++){
            if(tab[i] == tab[j+1]){
                tablica_pom[i] = 0;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d ", tablica_pom[i]);
        ile += tablica_pom[i];
    }
    printf("\nWynik: %d\n", ile);
    return ile;
}


//zawartosci ponizszej funkcji nie modyfikuj
void testy(){
    int tab1[] = {1,3,1,2,3};
    int tab2[] = {3,9,3,7,2,9,2,3,3};
    int tab3[] = {2,1};
    int tab4[] = {1,2,2,3};


    if(ile_roznych(tab1,5) == 3){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(ile_roznych(tab2,9) == 4)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n \n");
    ile_roznych(tab3,2) == 2 ? printf("3 -> pass\n\n") : printf("3 -> error!!!\n\n");
    ile_roznych(tab4,4) == 3 ? printf("4 -> pass\n") : printf("4 -> error!!!\n");
}
