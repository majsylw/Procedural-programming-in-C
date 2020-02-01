/*Programowanie proceduralne
grupa P00-33a
6.05.2019 Laboratorium 7
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zdefiniuj strukture Polynomial, ktora sluzy do reprezentowania
wielomianu n-tego stopnia liczb rzeczywistych. Struktura ma dwa pola. Są to liczba
całkowita n (stopien wielomianu) oraz wskaźnik na typ double (wskazujący
na tablicę zawierająca n+1 wspolczynnikow wielomianu). W tym celu utworz projekt.
Struktura powinna być zdefiniowana w pliku Polynomial.h.

Zaimplementuj następujące funkcje obsługujące strukture:
- struct Polynomial * newPolynomial(int);
pobiera liczbę całkowitą n i tworzy wektor (n+1)-elementowa tablice wspolczynniow wypelniona 0;
funkcja zwraca wskaznik na strukture Polynomial.
- void printPolynomial(struct Polynomial *);
pozwala wypisac postac wielomianu na ekran, np. 2x^2+5x^1+6x^0 dla wspolczynnikow {6,5,2} i stopnia 2
- void deletePolynomial(struct Polynomial **);
zwalnia pamięć zajmowaną przez strukturę; funkcja pobiera wskaznik na wektor przez adres, aby móc go wyzerowac
Zatem typem argumentu jest wskaznik na wskaznik (struct Polynomial **).
- void getalldcoefficientsPolynomial(struct Polynomial *);
pozwala na wyswietlenie wszystkich wspolczynnikow konkretnego wielomianu,
funkcja nic nie zwraca, jako argument podajemy wskaznik na strukture Polynomial

Pamiętaj, aby funkcje sprawdzały czy nie przekazano do nich pustego wskaźnika jako argumentu.

Zademonstruj dzialanie wszystkich funkcji w pliku main.c.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------

*/
#include <stdio.h>
#include <stdlib.h>

struct Polynomial{
    int degree; //stopien wielomianu
    double *coefficients; //wskaznik na tablice wspolczynnikow
};

// tworzymy nowa zmienna typu Polynomial z tablica wspolczynnikow o odpowiednim rozmiarze
struct Polynomial * newPolynomial(int n);

// drukujemy wielomian na ekranie
void printPolynomial(struct Polynomial *wielomian);

void deletePolynimial(struct Polynomial ** wielomian_coef);

//......................

int main()
{
    //deklaracja zmiennych a typu Polynomial
    struct Polynomial * a = newPolynomial(5);
    //drukowanie na ekranie zawartosci zmiennej - tablica powinna byc wypelniona zerami
    printPolynomial(a);
    printf("\n");

    //.............

    //usuwamy wypelniona tablice wspolczynnikow (zwalniamy pamiec)
    deletePolynimial(&(a->coefficients));
    //zwalniamy pamiec dla wskaznika na strukture Polynomial
    free(a);
    return 0;
}

// tworzymy nowa zmienna typu Polynomial z tablica wspolczynnikow o odpowiednim rozmiarze
struct Polynomial * newPolynomial(int n){
    struct Polynomial *wielomian = malloc(sizeof(struct Polynomial));

    // przypisujemy wartosci polom struktury wielomian
    wielomian->degree = n;
    wielomian->coefficients = malloc((n+1) * sizeof(*(wielomian->coefficients)));//bo potrzebujemy n+1 wspolczynnikow, np dla wielomianu stopnia 2 mamy a,b i c -> ax^2+bx+c (3 wspolczynniki)

    int i;
    for(i = 0; i <= n; ++i){ // wypelniamy tabele wspolczynnikow zerami
        wielomian->coefficients[i] = 0;
    }
    return wielomian;
};

// drukujemy wielomian na ekranie
void printPolynomial(struct Polynomial *wielomian){
    if(wielomian != NULL){//sprawdzamy czy w ogóle nasz wskaznik przekazany jako argument funkcji wskazuje na jakiekolwiek miejsce w pamieci
        int i;
        printf("f(x) = ");
        for(i = wielomian->degree; i > -1; --i){
            printf("%+.2lfx^%d", wielomian->coefficients[i], i);
        }
    } else{
        printf("\nWskaznik jest pusty!\n");
    }
};

void deletePolynimial(struct Polynomial ** wielomian_coef){
    if(wielomian_coef != NULL){
        free(wielomian_coef); // zwalniamy pamiec
        wielomian_coef = NULL; // ustawiamy wskaznik 'w nicosc'
    }
};
 //............................
