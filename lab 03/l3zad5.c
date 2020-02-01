#include<stdio.h>

int silnia(int n)
{
    if (n == 0) return 1;
    else return n*silnia(n-1);
}

int main()
{
    int liczba;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    printf("%d! = %d\n", liczba, silnia(liczba));
    return 0;
}
