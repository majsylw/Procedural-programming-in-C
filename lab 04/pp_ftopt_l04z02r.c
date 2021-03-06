/*Programowanie proceduralne
grupa P00-33a
18.03.2019 Zaliczenie czastkowe 1
imie:
nazwisko:
indeks:
*/

/* Zadanie 2

Napisz funkcje wyznaczajaca sume czesciowa naprzemiennego szeregu harmonicznego
do zadanej przez uzytkownika liczby n:

Specyfikacje co do funkcji:
1) funkcja naprzemienna_suma_harmoniczna():
- pobiera od uzytkownika jeden argumenty naturalny dodatni: n
- oblicza sume czesciowa naprzemiennego szeregu harmonicznego do zadanego n, tzn.

suma = 1 + 1/2 - 1/3 + 1/4 - ... +/- 1/n

- zwraca wynik (sume) w postaci liczby calkowitej

Umiesc w funkcji main interakcje z uzytkownikiem (wczytanie wartosci liczby n z klawiatury),
wywolanie funkcji dla podanej wartosci oraz wyswietlenie wyniku na ekranie konsoli.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------
Przyklad wywolania:
----------------------------------------------------
Podaj n: 2
Suma S: 1.5000000000

*/

/* Komentarz: */


#include <stdio.h>


float naprzemienna_suma_harmoniczna(int n); // 1pkt

void testy(); // deklaracja funkcji testujacej, tej linii nie modyfikuj


int main(){

    int n=7;
    printf("n = %d, S = %.10f", n, naprzemienna_suma_harmoniczna(n)); // 2pkt

    testy();
    return 0;
}

float naprzemienna_suma_harmoniczna(int n){
    int i;
    float suma = 1; // 1pkt
    for(i=2; i<=n; i+=2){ // 2pkt
        suma += 1/(float)i; // 1pkt
        //printf("%.10f\n", suma);
    }
    for(i=3; i<=n; i+=2){ //2pkt
        suma -= 1/(float)i; // 1pkt
        //printf("%.10f\n", suma);
    }
    return suma;
}


//zawartosci ponizszej funkcji nie modyfikuj
void testy(){
    naprzemienna_suma_harmoniczna(2) == 1.5 ? printf("\nOK\n") : printf("\nERROR\n");
}

