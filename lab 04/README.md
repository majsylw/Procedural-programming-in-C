# Pierwsza kartkówka

## Zadanie 1
Zaprojektuj funkcje (tzn. napisz deklaracje), ktora:
a) zamienia wartosci 2 liczb calkowitych
b) wyznacza sumę dwóch wielomianow dowolnego stopnia


## Zadanie 2
Napisz funkcje wyznaczajaca sume czesciowa naprzemiennego szeregu harmonicznego
do zadanej przez uzytkownika liczby n:

Specyfikacje co do funkcji:
1) funkcja naprzemienna_suma_harmoniczna():
- pobiera od uzytkownika jeden argumenty naturalny dodatni: n
- oblicza sume czesciowa naprzemiennego szeregu harmonicznego do zadanego n, tzn.

suma = 1 + 1/2 - 1/3 + 1/4 - ... +/- 1/n

- zwraca wynik (sume) w postaci liczby calkowitej

Umiesc w funkcji main interakcje z uzytkownikiem (wczytanie wartosci liczby n z klawiatury),
wywolanie funkcji dla podanej wartosci oraz wyswietlenie wyniku na ekranie konsoli.

Pamietaj o odpowiednim umieszczeniu w strukturze programu
deklaracji i definicji funkcji.

Przetestuj dzialanie swojej funkcji poprzez
zweryfikowanie otrzymanych wyników
dla wskazanych w funkcji testowej przypadków.

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!


## Zadanie 3
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
Ponizszy program powinien wypisywac na ekranie napis: Hello world!
Znajduja sie w nim jednak bledy.
Popraw bledy, aby program dzialal prawidlowo.
Opisz wprowadzone zmiany w komentarzach*/

<pre>
%include <studio.h> 

mein[]{
    printf('Hello world!')      
}
</pre>
