/*Programowanie proceduralne
grupa P00-33a
20.05.2019 Laboratorium 11
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zdefiniuj strukturê Trojmian, która bêdzie modelowaæ równanie kwadratowe,
to znaczy wielomian co najwy¿ej drugiego stopnia
(ax2 + bx + c : gdzie a, b, c s¹ rzeczywistymi wspó³czynnikami wielomianu).
Zaimplementuj funkcje:
- pozwalaj¹ce na wypisywanie na ekran,
- odczytywanie z klawiatury trójmianów,
- obliczajaca wartoœci trójmianu w okreœlonym punkcie,
- pozwalajaca pobrac wartosci zmiennej typu Trojmian z pliku txt,
- zapisujacej dane okreslonej zmiennej typu Trojmian od pliku.

Stworz projekt o w³aœciwym podziale kodu na 3 pliki:
- plik nag³ówkowy,
- plik Ÿród³owy dla napisanej funkcji oraz
- plik z kodem g³ównym, w ktorym umiescisz podany ponizej kod z funkcja main().

Zademonstruj dzia³anie wszystkich funkcji w pliku main.c.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------

*/
#include "trojmian.h"

int main(){
    // deklaracja zmiennej tr typu Trojmian
    struct Trojmian tr;

    // wczytanie zmiennej tr typu Trojmian
    printf("Wprowadz dane dla rownania kwadratowego\n");
    readTrojmian(&tr);

    // wypisanie na ekran zmiennej tr typu Trojmian
    printf("\nTwoje rownianie ma postac:\n");
    printTrojmian(tr);

    // obliczenie wartosci tr typu Trojmian w punkcie x
    float x = 5;
    printf("\nf(%.2f) = %.2f", x, valueTrojmian(tr, x));

    FILE* fptr, *wfptr;
    fptr = fopen("read_trojmian.txt", "r");
    wfptr = fopen("write_trojmian.txt", "w");

    readTrojmianfromfile(&tr, fptr);
    printTrojmiantofile(tr, wfptr);

    fclose(fptr);
    fclose(wfptr);

    return 0;
}
