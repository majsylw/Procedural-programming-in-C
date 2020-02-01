#include <stdio.h>

int suma(int);
int main(){
    int n = 0;
    printf("Podaj n: ");
    scanf("%d", &n);
    printf("n = %d, s = %d \n", n, suma(n));

    return 0;
}

int suma(int n){
    int i = 0;
    int suma = 0;
    for(i = 1; i <= n; ++i){
        suma += i;
    }
    return suma;
}
