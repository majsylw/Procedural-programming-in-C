/*Programowanie proceduralne
grupa P00-07f
9.04.2018 Zaliczenie czastkowe 2
imie:
nazwisko:
indeks:
*/

/*Zadanie 2 (4pkt)
Napisz program, ktory poprosi uzytkownika o podanie imion i nazwisk,
nastepnie wyswietli na ekranie napis zawierający stosowne inicjaly.
W tym celu napisz funkcje inicjaly() operujaca na tablicy znaków,
która bedzie wypisywac na ekran stosowne litery.
Uwaga 1. Postaraj sie zwrocic inicialy w postaci duzych liter.
Uwaga 2. Pamietaj o mozliwosci posiadania kilku imion/nazwisk, np. Jan Maciej Karol Wscieklica.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void inicjaly(char []);

int main(void)
{
    char napis[200];

    printf("Podaj imiona i nazwiska: ");
    gets(napis); // pobieranie napisu 0.5 punktu

    printf("Nazywasz sie: ");
    puts(napis); // wyswietlanie napisu 0.5 punktu

    inicjaly(napis);

    return 0;
}

void inicjaly(char napis[]){ // 3 punkty za napisanie funkcji
    int i;
    printf("\nTwoje inicjaly to: %c. ", toupper(napis[0])); // zakladamy, ze od razu mamy imie
    for(i = 1; i < strlen(napis); ++i){
        if(i != strlen(napis)-1 && napis[i] == ' '){ // musimy pamietac zeby nie wyjsc poza zakres tablicy
            printf("%c. ",toupper(napis[i+1]));
        }
    }
}
