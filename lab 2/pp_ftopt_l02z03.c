/*Programowanie proceduralne
grupa P00-33a
4.03.2019 Laboratorium 1
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcjê iloczyn(), która:
- pobiera od uzytkownika dwie liczby rzeczywiste,
- wylicza ich iloczyn,
- zwraca wynik w postaci liczby rzeczywistej.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzia³anie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------

*/

/* Komentarz: */


#include <stdio.h> // zaimportowanie biblioteki do komunikacji narzedzia wejscia/wyjscia
#include <math.h> // wczytana w celu wykorzystania funkcji fabs w testach

//miejsce na deklaracje twojej funkcji - pamietaj o odpowiednich typach zwracanej wartosci i typach argumentow oraz o nazwie funkcji
//.........

void testy(); // deklaracja funkcji testujacej, tej linii nie modyfikuj

int main(){

    testy();
    return 0;
}

//miejsce na definicje twojej funkcji
//.................


//zawartosci ponizszej funkcji nie modyfikuj
void testy(){
    if(iloczyn(1.5,2) == 3){
        printf("1 -> pass\n");
    }
    else{
        printf("1 -> error!!!\n");
    }
    if((iloczyn(-2.2, 3.1) - (-2.2*3.1)) < fabs(1e-6))
        printf("2 -> pass\n");
    else
        printf("2 -> error!!! %.15f \n", iloczyn(-2.2, 3.1) - (float)((float)-2.2*(float)3.1));
    ((iloczyn(-2.2, -3.1) - (-2.2*-3.1)) < fabs(1e-6)) ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}

