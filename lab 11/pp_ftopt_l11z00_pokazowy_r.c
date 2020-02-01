/*Programowanie proceduralne
grupa P00-33a
20.05.2019 Laboratorium 11
imie:
nazwisko:
indeks:
*/

/* Zadanie

Zdefiniuj strukturê Trojmian, która bêdzie modelowaæ równanie kwadratowe,
to znaczy wielomian co najwy¿ej drugiego stopnia
(ax2 + bx + c : gdzie a, b, c sa rzeczywistymi wspó³czynnikami wielomianu).
Zaimplementuj funkcje:
- pozwalaj¹ce na wypisywanie na ekran,
- odczytywanie z klawiatury trójmianów,
- obliczajaca wartoœci trójmianu w okreœlonym punkcie,
- pozwalajaca pobrac wartosci zmiennej typu Trojmian z pliku txt,
- zapisujacej dane okreslonej zmiennej typu Trojmian od pliku.

Stworz projekt o w³aœciwym podziale kodu na 3 pliki:
- plik nag³ówkowy,
- plik Ÿród³owy dla napisanej funkcji oraz
- plik z kodem g³ównym, w ktorym umiescisz podany ponizej kod z funkcja main().

Zademonstruj dzia³anie wszystkich funkcji w pliku main.c.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------

*/
#include <stdio.h>

struct Trojmian {
    float a;
    float b;
    float c;
};

 //funkcja, która wczytuje dane od użytkownika
void readTrojmian(struct Trojmian*);

 //funkcja, która wyświetla dane na ekran
void printTrojmian(struct Trojmian);

 //funkcja, która wylicza wartosc trojmianu w okreslonym punkcie
float valueTrojmian(struct Trojmian, float);

 //funkcja, która wczytuje dane z pliku
void readTrojmianfromfile(struct Trojmian*, FILE*);

 //funkcja, która zapisuje dane do pliku
void printTrojmiantofile(struct Trojmian, FILE*);

int main(){
    // deklaracja zmiennej tr typu Trojmian
    struct Trojmian tr;

    // wczytanie zmiennej tr typu Trojmian
    printf("Wprowadz dane dla rownania kwadratowego\n");
    readTrojmian(&tr);

    // wypisanie na ekran zmiennej tr typu Trojmian
    printf("\nTwoje rownianie ma postac:\n");
    printTrojmian(tr);

    // obliczenie wartosci tr typu Trojmian w punkcie x
    float x = 5;
    printf("\nf(%.2f) = %.2f", x, valueTrojmian(tr, x));

    FILE* fptr, *wfptr;
    fptr = fopen("read_trojmian.txt", "r");
    wfptr = fopen("write_trojmian.txt", "w");

    readTrojmianfromfile(&tr, fptr);
    printTrojmiantofile(tr, wfptr);

    fclose(fptr);
    fclose(wfptr);
    return 0;
}

 //definicja -> funkcja, która wczytuje dane od użytkownika
void readTrojmian(struct Trojmian* t){
    printf("Podaj wspolczynnik a: ");
    scanf("%f", &(t->a));
    printf("Podaj wspolczynnik b: ");
    scanf("%f", &(t->b));
    printf("Podaj wspolczynnik c: ");
    scanf("%f", &(t->c));
}

 //definicja -> funkcja, która wyświetla trojmian na ekran
void printTrojmian(struct Trojmian t){
    printf("f(x) = %.2fx^2 + %.2fx + %.2f", t.a, t.b, t.c);
}

 //definicja -> funkcja, która wylicza wartosc trojmianu w okreslonym punkcie
float valueTrojmian(struct Trojmian t, float x){
    return x*x*t.a + x*t.b + t.c;
}

 //definicja -> funkcja, która wczytuje dane z pliku
void readTrojmianfromfile(struct Trojmian* t, FILE* rfptr){
    if(rfptr != NULL){
        fscanf(rfptr,"f(x) = %fx^2 + %fx + %f\n", &(t->a),&(t->b),&(t->c));
    }else{
        printf("\nCos nie wyszlo z otwieraniem pliku!\n");
    }
}

 //definicja -> funkcja, która zapisuje dane do pliku
void printTrojmiantofile(struct Trojmian t, FILE* fptr){
    if(fptr != NULL){
        fprintf(fptr, "f(x) = %.2fx^2 + %.2fx + %.2f\n", t.a, t.b, t.c);
    }else{
        printf("\nCos nie wyszlo z otwieraniem pliku!\n");
    }
}
