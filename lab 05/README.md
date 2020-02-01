# Zaliczenie cząstkowe 1

## Zadanie 1
Napisz program, który poprosi użytkownika o podanie liczby boków wielokąta foremnego oraz długość jego boku,
a następnie obliczy oraz wyświetli wartość jego pola i obwodu. W tym celu napisz funkcję, pobierającą argument
typu całkowitoliczbowego oraz typu zmiennoprzecinkowego, która wyświetli wartość pola i obwodu wielokąta.
Funkcja ma być typu void. Do wyliczenia pola wielokąta skorzystaj ze wzoru:
P = 0.25 * n * a^2 * ctan(pi/n), gdzie a - długość boku i n - liczba boków.


## Zadanie 2
Zaimplementuj funkcje int newton(int, int),
ktora oblicza wartosc symbolu Newtona korzystając z formuły rekurencyjnej

n po k =
   1                          gdy k = 0 lub k = n
   (n-1 po k-1) + (n-1 po k)  gdy 0 < k < n

Dla przypadków nieobjętych powyższym wzorem funkcja powinna wyświetlić komunikat
o niepoprawnych danych i zwrócić 0. Zobrazuj działanie funkcji na co najmniej
trzech przykładach w funkcji main.


# Zadanie 3
Napisz program, który wyznacza iloczyn wartosci skalarnej c i wektora A o dowolnej
długosci. Mnozenie stałej i wektora ma byc wykonane przez w zdefiniowanej funkcji.
Wynikiem wyswietlonym w konsoli maja byc wartosci dwóch wektorów:
A i Ac.