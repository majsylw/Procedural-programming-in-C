/*Programowanie proceduralne
grupa P00-07f
21.03.2017 Zaliczenie czastkowe 1
imie:
nazwisko:
indeks:*/

/*Zadanie 1 (4 pkt.)

Napisz program, kt�ry poprosi u�ytkownika o podanie liczby bok�w wielok�ta foremnego oraz d�ugo�� jego boku,
a nast�pnie obliczy oraz wy�wietli warto�� jego pola i obwodu. W tym celu napisz funkcj�, pobieraj�c� argument
typu ca�kowitoliczbowego oraz typu zmiennoprzecinkowego, kt�ra wy�wietli warto�� pola i obwodu wielok�ta.
Funkcja ma by� typu void. Do wyliczenia pola wielok�ta skorzystaj ze wzoru:
P = 0.25 * n * a^2 * ctan(pi/n), gdzie a - d�ugo�� boku i n - liczba bok�w.

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
