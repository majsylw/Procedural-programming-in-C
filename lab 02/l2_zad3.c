#include <stdio.h>

void piramida(int);

int main(){
    int wysokosc = 0;

    printf("Podaj liczbe wierszy: ");
    scanf("%d", &wysokosc);
    piramida(wysokosc);

    return 0;
}

void piramida(int h){
    int i, N, k = 1;

    for(N = 0; N < h; ++N){
        for(i = h-1; i > N; --i){
            printf(" ");
        }
        for(i = 0; i <= 2*N; ++i){
            printf("*");
        }
        //++k;
        printf("\n");
    }
}
