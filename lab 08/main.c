/*Programowanie proceduralne
grupa P00-33a
6.05.2019 Laboratorium 7
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zdefiniuj strukture Polynomial, ktora sluzy do reprezentowania
wielomianu n-tego stopnia liczb rzeczywistych. Struktura ma dwa pola. S¹ to liczba
ca³kowita n (stopien wielomianu) oraz wskaŸnik na typ double (wskazuj¹cy
na tablicê zawieraj¹ca n+1 wspolczynnikow wielomianu). W tym celu utworz projekt.
Struktura powinna byæ zdefiniowana w pliku Polynomial.h.

Zaimplementuj nastêpuj¹ce funkcje obs³uguj¹ce strukture:
- struct Polynomial * newPolynomial(int);
pobiera liczbê ca³kowit¹ n i tworzy wektor (n+1)-elementowa tablice wspolczynniow wypelniona 0;
funkcja zwraca wskaznik na strukture Polynomial.
- void printPolynomial(struct Polynomial *);
pozwala wypisac postac wielomianu na ekran, np. 2x^2+5x^1+6x^0 dla wspolczynnikow {6,5,2} i stopnia 2
- void deletePolynomial(struct Polynomial **);
zwalnia pamiêæ zajmowan¹ przez strukturê; funkcja pobiera wskaznik na wektor przez adres, aby móc go wyzerowac
Zatem typem argumentu jest wskaznik na wskaznik (struct Polynomial **).
- void setPolynomial(struct Polynomial *, double *);
pozwala na wprowadzenie wartosci wspolczynnikow w kolejnosci od stojacego przy najmniejszej potedze do stojacego przy najwiekszej

Pamiêtaj, aby funkcje sprawdza³y czy nie przekazano do nich pustego wskaŸnika jako argumentu.

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
