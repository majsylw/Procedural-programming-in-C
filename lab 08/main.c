/*Programowanie proceduralne
grupa P00-33a
6.05.2019 Laboratorium 7
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zdefiniuj strukture Polynomial, ktora sluzy do reprezentowania
wielomianu n-tego stopnia liczb rzeczywistych. Struktura ma dwa pola. S� to liczba
ca�kowita n (stopien wielomianu) oraz wska�nik na typ double (wskazuj�cy
na tablic� zawieraj�ca n+1 wspolczynnikow wielomianu). W tym celu utworz projekt.
Struktura powinna by� zdefiniowana w pliku Polynomial.h.

Zaimplementuj nast�puj�ce funkcje obs�uguj�ce strukture:
- struct Polynomial * newPolynomial(int);
pobiera liczb� ca�kowit� n i tworzy wektor (n+1)-elementowa tablice wspolczynniow wypelniona 0;
funkcja zwraca wskaznik na strukture Polynomial.
- void printPolynomial(struct Polynomial *);
pozwala wypisac postac wielomianu na ekran, np. 2x^2+5x^1+6x^0 dla wspolczynnikow {6,5,2} i stopnia 2
- void deletePolynomial(struct Polynomial **);
zwalnia pami�� zajmowan� przez struktur�; funkcja pobiera wskaznik na wektor przez adres, aby m�c go wyzerowac
Zatem typem argumentu jest wskaznik na wskaznik (struct Polynomial **).
- void setPolynomial(struct Polynomial *, double *);
pozwala na wprowadzenie wartosci wspolczynnikow w kolejnosci od stojacego przy najmniejszej potedze do stojacego przy najwiekszej

Pami�taj, aby funkcje sprawdza�y czy nie przekazano do nich pustego wska�nika jako argumentu.

Zademonstruj dzialanie wszystkich funkcji w pliku main.c.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------

*/
#include "polynomial.h"

int main()
{
    //deklaracja zmiennych a typu Polynomial
    struct Polynomial * a = newPolynomial(5);
    //drukowanie na ekranie zawartosci zmiennej - tablica powinna byc wypelniona zerami
    printPolynomial(a);
    printf("\n");

    double tablica[] = {6,3,8,1,2,3};
    setPolynomial(a, tablica);

    printPolynomial(a);
    printf("\n");

    //usuwamy wypelniona tablice wspolczynnikow (zwalniamy pamiec)
    deletePolynimial(&(a->coefficients));
    //zwalniamy pamiec dla wskaznika na strukture Polynomial
    free(a);
    return 0;
}
