/*Programowanie proceduralne
grupa P00-33a
25.03.2019 Laboratorium 5
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zaimplementuj funkcje anagram(), która:
- pobiera od uzytkownika dwa argumenty - dwie tablice znakow (dwa napisy)
- sprawdza czy podane przez uztkownika tablice sa swoimi anagramami, tzn. skladaja sie z takich samych liter, a roznia sie miedzy soba jedynie ich kolejnoscia, np.
slowa: pasikonik i skopianki s¹ swoimi anagramiami (wskazowka, postaraj sie posortowac oba napisy i potem je porownywac; funkcja nie powinna rozrozniac wielkosci liter)
- zwraca 1 gdy podane napisy sa swoimi anagramami, lub 0 gdy nie sa

Zademonstruj dzialanie tej funkcji: napisz program, który wywoluje ja dla
testowych danych.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------

*/

/* Komentarz: */


#include <stdio.h> // zaimportowanie biblioteki do komunikacji narzedzia wejscia/wyjscia
#include <stdlib.h> // biblioteka niezbedna do wykorzystania funkcji losujacej cyfry
#include <ctype.h>
#include <string.h>

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
    char tab1[] = "pasikonik";
    char tab2[] = "skopianki";
    char tab3[] = "morza";
    char tab4[] = "zmora";


    if(anagram(tab1,tab2) == 1){
        printf("1 -> pass\n\n");
    }
    else{
        printf("1 -> error!!!\n\n");
    }
    if(anagram(tab3,tab2) == 0)
        printf("2 -> pass\n\n");
    else
        printf("2 -> error!!!\n \n");
    anagram(tab3,tab4) == 1 ? printf("3 -> pass\n\n") : printf("3 -> error!!!\n\n");
}

