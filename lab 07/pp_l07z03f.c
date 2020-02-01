/*Programowanie proceduralne
grupa P00-07f
9.04.2018 Zaliczenie czastkowe 2
imie:
nazwisko:
indeks:
*/

/*Zadanie 3 (3pkt)

Napisz program, który dla 10-elementowej tablicy wypelnionej losowymi cyframi (liczby calkowite z zakresu 0-9)
zsumuje jej zawartosc. W tym celu napisz funkcje suma(). Funkcja ma zwracac wartosc wyliczonej sumy.
Stworz projekt, w ktorym program podzielisz na 3 pliki:
- plik naglowkowy, (1pkt)
- plik zrodlowy dla napisanej funkcji (2pkt) oraz
- plik z kodem glownym (funkcje main), w ktorym wypelnisz tablice cyframi, wywolasz napisana funkcje
  i wyswietlisz stosowny komunikat(1pkt).

Dla uproszczenia w kodzie umieszczono szkielet opisanego powyzej programu.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

int suma(int, int[]);

int main(){
    srand(time(NULL));
    int i, element;
    int tab[N];

    for(i = 0; i < N; ++i){
        tab[i] = rand()%10;
    }

    //
    //

    return 0;
}

int suma(int rozmiar, int tablica[]){

    //
    //
    //

}
