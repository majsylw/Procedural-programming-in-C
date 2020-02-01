#include <stdio.h>

int silnia(int);

int main(){
    int n = 0;
    printf("Podaj n: ");
    scanf("%d", &n);
    printf("n  = %d\nn! = %d\n", n, silnia(n));
    return 0;
}

int silnia(int n){
    int i, s = 1;
    for(i = 1; i <= n; ++i){
        s *= i;
    }
    return s;
}
