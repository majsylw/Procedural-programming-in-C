/*Programowanie proceduralne
grupa P00-33a
18.03.2019 Zaliczenie czastkowe 1
imie:
nazwisko:
indeks:
*/

/* Zadanie 3 (10pkt)
Napisz program rysujący trójkąt Pascala o zadanej przez użytkownika wielkosci.
W programie zastosowane zostaną dwie dodatkowe funkcje. Pierwsza z nich
posluzy do wyliczenia wartosci na danej pozycji w wierszu natomiast druga funkcja
pozwoli na wyswietlenia liczb w postaci trojkata Pascala.

Specyfikacje co do funkcji:
1) funkcja symbol_newtona():
- pobiera od uzytkownika dwa argumenty calkowite: n i k
- oblicza symbol newtona (n nad k) w sposob rekurencyjny, tzn.
       /
(n)    | 1              dla k = 0
(k)  = | 1              dla n = k
       | (n-1) + (n-1)
       | (k-1) + ( k )  dla pozostalych n i k
       \
- zwraca wynik w postaci liczby calkowitej.

2) funkcja trojkat_pascala():
- pobiera od uzytkownika jeden argument calkowity: liczbe wierszy trojkata (wysokosc)
- korzystajac z petli oraz funkcji symbol_newtona rysuje trojkat paskala
- nic nie zwraca

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------
Przyklad wywolania:
----------------------------------------------------
Podaj wysokosc trojkata: 3

    1
   1 1
  1 2 1
 1 3 3 1

*/

/* Komentarz: */


#include <stdio.h>

int symbol_newtona(int n, int k); // 1pkt
void trojkat_pascala(int n); // 1pkt

void testy(); // deklaracja funkcji testujacej, tej linii nie modyfikuj


int main(){
    int h;
    printf("Podaj wysokosc: ");
    scanf("%d", &h);
    trojkat_pascala(h);

    testy();
    return 0;
}


//zawartosci ponizszej funkcji nie modyfikuj
void testy(){
    printf("\n\nTestowanie funkcji rysujacej trojkat Pascala:\n\n");

    trojkat_pascala(5);
    printf("\n\n");
    trojkat_pascala(10);

    symbol_newtona(2,1) == 2 ? printf("\nOK\n") : printf("\nERROR\n");
    symbol_newtona(2,0) == 1 ? printf("\nOK\n") : printf("\nERROR\n");
    symbol_newtona(5,5) == 1 ? printf("\nOK\n") : printf("\nERROR\n");
}



int symbol_newtona(int n, int k){
    if(k==0 || k==n) // 2pkt
        return 1;
    else
        return symbol_newtona(n-1, k-1) + symbol_newtona(n-1,k); // 2pkt
}

void trojkat_pascala(int n){
    int i, j, k;
    int pom = n;
    for(i=0; i<n; i++){ // 2pkt
        for(k=pom; k > 0; k--){ // 1pkt
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("%4d", symbol_newtona(i,j)); // 1pkt
        }
        printf("\n");
        pom--;
    }
}
