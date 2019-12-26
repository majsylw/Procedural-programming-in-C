/*Programowanie proceduralne
grupa P00-33a
4.03.2019 Laboratorium 1
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcjê iloraz(), która:
- pobiera od uzytkownika dwie liczby calkowite,
- wylicza ich iloraz (zakladamy, ze dzielimy druga liczbe przez pierwsza, dla zadanej kolejnosci argumentow),
- zwraca wynik w postaci liczby calkowitej.

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
    if(iloraz(1,2) == 0){
        printf("1 -> pass\n");
    }
    else{
        printf("1 -> error!!!\n");
    }
    if(iloraz(-6,3) == -2)
        printf("2 -> pass\n");
    else
        printf("2 -> error!!!\n");
    iloraz(-6,-3) == 2 ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}



