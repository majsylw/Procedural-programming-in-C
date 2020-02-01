/*Programowanie proceduralne
grupa P00-33a
11.03.2019 Laboratorium 3
imie:
nazwisko:
indeks:
*/

/* Zadanie

Napisz funkcje relacja(), która:
- pobiera od uzytkownika dwa argumenty: dwie liczby calkowite
- sprawdza, jaka zachodzi miêdzy dwiema liczbami calkowitymi - czy liczby sa rowne, czy pierwsza liczba jest wieksza od drugiej lub czy pierwsza liczba jest mniejsza od drugiej
- zwraca odpowiedni znak - =,>,< - w zaleznosci od wyniku.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------
Przyklad wywolania:
Podaj pierwsza liczbe: 3
Podaj druga liczbe: 3

Wynik: =

*/

/* Komentarz: */


#include <stdio.h> // zaimportowanie biblioteki do komunikacji narzedzia wejscia/wyjscia

//miejsce na deklaracje twojej funkcji - pamietaj o odpowiednich typach zwracanej wartosci i typach argumentow oraz o nazwie funkcji
//.........

void testy(); // deklaracja funkcji testujacej, tej linii nie modyfikuj


int main(){
    // miejsce na interakcje z uzytkownikiem
    //...........
    //...........

    testy();
    return 0;
}

//miejsce na definicje twojej funkcji
//.................


//zawartosci ponizszej funkcji nie modyfikuj
void testy(){
    if(relacja(1,3) == '<'){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(relacja(4,3) == '>')
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n\n");
    relacja(3,3) == '=' ? printf("3 -> pass\n") : printf("3 -> error!!!\n");
}


