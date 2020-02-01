/*Programowanie proceduralne
grupa P00-07f
21.03.2017 Zaliczenie czastkowe 1
imie:
nazwisko:
indeks:*/

/*Zadanie 1 (4 pkt.)

Napisz program, który poprosi u¿ytkownika o podanie liczby boków wielok¹ta foremnego oraz d³ugoœæ jego boku,
a nastêpnie obliczy oraz wyœwietli wartoœæ jego pola i obwodu. W tym celu napisz funkcjê, pobieraj¹c¹ argument
typu ca³kowitoliczbowego oraz typu zmiennoprzecinkowego, która wyœwietli wartoœæ pola i obwodu wielok¹ta.
Funkcja ma byæ typu void. Do wyliczenia pola wielok¹ta skorzystaj ze wzoru:
P = 0.25 * n * a^2 * ctan(pi/n), gdzie a - d³ugoœæ boku i n - liczba boków.

*/

#include <stdio.h>
#include <math.h>

void wielokat(float, int);

int main(){
    int n;
    float bok;

    printf("Podaj liczbe bokow wielokata: ");
    scanf("%d", &n);
    printf("Podaj dlugosc boku wielokata: ");
    scanf("%f", &bok);

    wielokat(bok, n);

    return 0;
}

void wielokat(float a, int k){
    float pole;
    pole = 0.25 * k * a * a * ctan(M_PI/k);
    printf("\nObwod tego wielokata wyniesie %.2f.\n", k*a);
    printf("Pole tego wielokata wyniesie %.2f.\n", pole);

}
