#include <stdio.h>
#include <math.h>

float iloczyn_skalarny(float[], float[]);
float norma(float[]);

int main(){
    float a[2], b[2];

    printf("Podaj wspolrzedna ax: ");
    scanf("%f", &a[0]);
    printf("Podaj wspolrzedna ay: ");
    scanf("%f", &a[1]);
    printf("Podaj wspolrzedna bx: ");
    scanf("%f", &b[0]);
    printf("Podaj wspolrzedna by: ");
    scanf("%f", &b[1]);


    printf("\na   = [%f, %f]\n", a[0], a[1]);
    printf("b   = [%f, %f]\n", b[0], b[1]);
    printf("a.b = %f\n", iloczyn_skalarny(a, b));
    printf("|a| = %f\n", norma(a));
    printf("|b| = %f\n", norma(b));
    printf("cos(phi) = %f\n", iloczyn_skalarny(a, b)/norma(a)/norma(b));
    printf("phi = %f rad\n", acos(iloczyn_skalarny(a, b)/norma(a)/norma(b))); // radiany
    printf("phi = %f st.\n", acos(iloczyn_skalarny(a, b)/norma(a)/norma(b))*180/M_PI); // stopnie
    return 0;
}

float iloczyn_skalarny(float a[], float b[]){
    return a[0]*b[0] + a[1]*b[1];
}

float norma(float a[]){
    return sqrt(a[0]*a[0]+a[1]*a[1]);
}
