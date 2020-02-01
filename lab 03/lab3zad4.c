#include<stdio.h>

int suma(int n)
{
    if (n == 0) return 0;
    else return n+suma(n-1);
}

int main()
{
    int liczba;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    printf("n = %d, s = %d\n", liczba, suma(liczba));
    return 0;
}
