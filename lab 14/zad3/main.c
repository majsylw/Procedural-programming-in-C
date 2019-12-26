/*
(2pkt)
Zdefiniuj strukture o nazwie BlackHole, zawierajaca dwa pola:
- tablice do przechowania nazwy czarnej dziury o dlugosci 6-ciu znakow
- zmienna do przechowania temperatury czarnej dziury wyrazonej w Kelwinach
Za pomoca odpowiedniego slowa kluczowego, nadaj utworzonej strukturze alias "Hole".
(2pkt)
Zadeklaruj i zdefiniuj funkcje o nazwie new_hole, zwracajaca wartosc typu utworzonej struktury.
Funkacja powinna przyjmowac dwa argumenty, przechowujace 6-cio znakowa nazwe i temperature,
ktore beda wpisane w odpowiednie pola zwracanej warosci Hole.
(2pkt)
Zadeklaruj i zdefiniuj funckje o nazwie hole_mass, zwracajaca mase czarnej dziury wyrazona w kilogramach.
Funkcja powinna przyjmowac wskaznik na zdefiniowana strukture jako argument.
Zwracana masa powinna byc policzona wedlug wzorow zalaczonych do zadania z wykorzystaniem temperatury przechowywanej w zmiennej.
(2pkt)
Definicje struktury, nadanie aliasu, deklaracje funkcji oraz definicje potrzebnych stalych umiesc w jednym pliku naglowkowym.
Deklaracje funkcji umiesc w jednym pliku zrodlowym, ale innym niz jest funkcja glowna programu.
(2pkt)
W funkcji glownej programu zaprezentuj dzialanie zdefiniowanej struktury i funkcji poprzez:
- utworzenie zmiennej typu Hole,
- nadanie jej nazwy i teperatury za pomoca funkcji new_hole,
- wypisanie w konsoli ustawionych wartosci pol zmiennej oraz masy policzonej funkcja hole_mass.
*/

#include "Header.h"// 1 - odpowiedni podzial na pliki
#include <stdio.h>

int main()
{
    // 1 - utworzenie zmiennej Hole i wypelnienie jej pol watosciami
    Hole A;
    char name[] = "GCH354";
    A = new_hole(name,1.);

    // 1 - policzenie i wyswietlenie wymaganych wartosci
    printf("%s\t%f\t%e\n", A.name, A.T, hole_mass(&A));

    return 0;
}


