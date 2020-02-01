#include <stdio.h>
#include <math.h>

void wyswietl_kwadrat(float *);

int main(){
    float x = 0.0;
    printf("Podaj liczbe rzeczywista: ");
    scanf("%f", &x);
    printf("x   = %.3f\n", x);
    wyswietl_kwadrat(&x);

    return 0;
}

void wyswietl_kwadrat(float *x){
    *x = pow(*x, 2);
    printf("x^2 = %.3f\n", *x);
}
