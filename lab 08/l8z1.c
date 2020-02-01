#include <stdio.h>

struct complex {
   float real; //czesc rzeczywista
   float imaginary; //czesc urojona
};

int main()
{
    //deklaracja zmiennych a, b
    //bedacych strukturami
    struct complex a, b;

    //przypisanie wartoœci polom struktury a ...
    a.real =  -1.5;
    a.imaginary = 3.0;

    //... oraz b
    b.real = -0.4;
    b.imaginary = 1.2;

    //wyswietlenie wartosci pol struktury
    printf("a = %.2f + %.2fi\n", a.real, a.imaginary);
    printf("b = %.2f + %.2fi\n", b.real, b.imaginary);

    return 0;
}
