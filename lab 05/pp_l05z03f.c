/*Programowanie proceduralne
grupa P00-07f
21.03.2017 Zaliczenie czastkowe 1
imie:
nazwisko:
indeks:*/

/*Zadanie 3 (4 pkt.)
Napisz program, który wyznacza iloczyn wartosci skalarnej c i wektora A o dowolnej
d³ugosci. Mnozenie sta³ej i wektora ma byc wykonane przez w zdefiniowanej funkcji.
Wynikiem wyswietlonym w konsoli maja byc wartosci dwóch wektorów:
A Ac.
, .
*/

#include <stdio.h>

void iloczyn(int, float, float []);

int main(){
    float stala = 2;
    float a[] = {3,4};
    int n = sizeof(a)/sizeof(*a);

    printf("%.2f * { ", stala);
    int k;
    for(k = 0; k < n; ++k){
        printf("%.2f ", a[k]);
    }
    printf("} = { ");
    iloczyn(n, stala, a);
    for(k = 0; k < n; ++k){
        printf("%.2f ", a[k]);
    }
    printf("} \n");
    return 0;
}
void iloczyn(int n, float c, float vec[]){
    int i;
    for(i = 0; i < n; ++i){
        vec[i] *= c;
    }
}
