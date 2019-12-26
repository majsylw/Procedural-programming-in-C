/*Programowanie proceduralne
grupa P00-33a
10.06.2019 Kolokwium zaliczeniowe
imie:
nazwisko:
indeks:
*/

/*Zadanie 4 (10 pkt.)

Napisz program, ktory zapisuje do pliku 100 wierszy
zawierajacych dwie liczby losowe przedzielone spacja
(liczby z przedzialu 0, 1 z rozkladu jednostajnego).

Program powinien prosic uzytkownika o nazwe pliku, do ktorego zapisac liczby
(możesz przyjąć, że nazwa pliku nie przekroczy 50 znaków).
W przypadku niepowodzenia w otwarciu pliku
program powinien wypisywać dane na ekran.

*/
#include<stdio.h>                               //1 dolaczenie wlasciwych bibliotek
#include<stdlib.h>
#define N 51

int main(){
    FILE* plik;                                 //1 deklaracja zmiennej plikowej
    char nazwa[N];

    printf("Podaj nazwe: ");                    //1 pobranie nazwy pliku od uzytkownika
    scanf("%s",nazwa);

    plik = fopen(nazwa,"w");                    //1 otwarcie pliku
    if(!plik)
        plik = stdout;                          //1 zmiana celu wypisywania przez przypisanie stdout
                                                //lub odpowiednie połączenie instrukcji if, fprintf, printf
    int i;
    for(i=0; i<100; i++){                       //1 zapetlenie zapisu
        double x;
        x = (double)rand()/RAND_MAX;            //1 wylosowanie zmiennej z podanego rozkladu
        fprintf(plik,"%g",x);
        x = (double)rand()/RAND_MAX;            //1 wylosowanie drugiej zmiennej z podanego rozkladu
        fprintf(plik," %g\n",x);                //1 zapis do pliku oczekiwanym formacie
    }

    fclose(plik);                               //1 zamkniecie pliku
    return 0;
}
