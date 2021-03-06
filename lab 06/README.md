# Druga kartkówka

## Zadanie 1
Odpowiedz na dwa poniższe pytania:
a) jaka jest budowa (struktura) pliku nagłówkowego (rozszerzenie *.h)?
b) jaka jest budowa (struktura) pliku źródłowego (rozszerzenie *.c)?


## Zadanie 2
Zaimplementuj funkcje void gnomesort(int t[], int n)
ktora sortuje rosnaco n-elementowa tablice
liczb calkowitych wedlug algorytmu opisanego w definicji funkcji.

Dla ulatwienia zaimplementowano funkcje int main(),
ktora wywoluje funkcje gnomesort() w celu
demonstracji jej dzialania.

W programie zadeklarowano i zdefiniowano tez inne funkcje pomocnicze:
void fillTable(int t[], int n);
void print(int t[], int n);
void shuffle(int t[], int n, int m);
void swap(int t[], int i, int j);
Nie modyfikuj ich!

Pracuj jedynie w definicji funkcji void gnomesort(int t[], int n).

```
#include<stdio.h>
#include<stdlib.H>
#include<time.h>

#define N 20
#define M 100

//Funkcja wypelnia tablice t, liczbami calkowitymi od 0 do n-1.
void fillTable(int t[], int n);

//Funkcja wypisuje na ekran zawartosc n-elementowej
//tablicy liczb calkowitych t.
void print(int t[], int n);

//Funkcja tasuje elementy n-elementowej tablicy liczb calkowitych t,
//wykonujac m zamian elementow.
void shuffle(int t[], int n, int m);

//Funkcja zamienia miejscami elementy na pozycjach i oraz j
//w n-elementowej tablicy liczb calkowitych t.
void swap(int t[], int i, int j);

//Funkcja sortuje rosnaco n-elementowa tablice liczb calkowitych t.
void gnomesort(int t[], int n);

int main()
{
    int t[N];
    fillTable(t,N);
    srand(1234);
    shuffle(t,N,M);
    print(t,N);
    printf("\n");
    gnomesort(t,N);
    print(t,N);
    printf("\n");
    return 0;
}

void print(int t[], int n){
    int i;
    for(i=0;i<N;i++)
        printf("%d ",t[i]);
}

void fillTable(int t[], int n){
    int i;
    for(i=0;i<N;i++)
        t[i] = i;
}

void shuffle(int t[], int n, int m){
    int i;
    srand(time(NULL));
    for(i=0; i<m; i++){
        swap(t,rand()%n,rand()%n);
    }
}

void swap(int t[], int i, int j){
    int tmp;
    tmp = t[i];
    t[i] = t[j];
    t[j] = tmp;
}

void gnomesort(int t[], int n){
/* Przechodzimy przez tablice uzywajac zmiennej pomocniczej j
   do odliczania elementow w tablicy
   Jesli element j jest wiekszy od elementu j+1 to zamieniamy je miejscami.
   Po zamianie sprawdzamy czy j jest wieksze od 0
   i czy element element j jest mniejszy od elementu j-1
     -jesli oba warunki sa spelnione to przypisujemy j wartosc -1 .*/
    int j; //1p
    for (j=0;j<n-1;++j) //2p
        if (t[j]>t[j+1]){ //2p
            swap(t,j,j+1); //2p
            if (j>0 && t[j]<t[j-1]) //2p
            j=-1; //1p
        }
}
```


# Zadanie 3
Zadeklaruj i zdefiniuj funkcje iseven(), ktora zwraca wartosc calkowita 1,
jesli wszystkie elementy tablicy podanej jako pierwszy argument funkcji
sa parzyste; w przeciwnym przypadku funkcja zwraca 0.
Rozmiar tablicy przekazywany jest jako drugi argument funkcji.

Dla ulatwienia w programie zdefiniowano funkcje int main(),
ktora sluzy do testowania funkcji iseven().

<pre>
#include <stdio.h>


int main()
{
    int a1[] = {2, 4, 6, 8, 0};
    int a2[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("iseven(a1): %d\n", iseven(a1, n));
    printf("iseven(a2): %d\n", iseven(a2, n));
    return 0;
}
</pre>
