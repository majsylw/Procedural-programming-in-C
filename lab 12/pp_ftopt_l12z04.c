/*Programowanie proceduralne
grupa P00-33a
27.05.2019 Zaliczenie czastkowe 3
imie:
nazwisko:
indeks:

Grupa C
*/


/* Zadanie 1 (24 pkt)
Zdefinuj struktury:
a) Punkt_xy, ktora bedzie sluzyla do reprezentowania punktu w dwuwymiarowym ukladzie wspolrzednych kartezjanskich
(struktura ma trzy skladowe odpowiadające rzeczywistym wartosciom wspolrzednych x i y
 oraz liczbe calkowita odpowiadajaca cwiartce, w ktorej znajduje sie punkt: 1 - pierwsza cwiartka
                                                                            2 - druga cwiartka
                                                                            3 - trzecia cwiartka
                                                                            4 - czwarta cwiartka
                                                                            0 - na osiach ukladu wspolrzednych).
Strukture wyposaz w funkcje:
- pozwalajaca na wypisywanie na ekran zmiennych typu Punkt_xy
- odczytywanie z klawiatury zmiennych typu Punkt_xy
- dodajaca do siebie dwie zmienne typu Punkt_xy
- obliczajaca norme wektora wodzacego zmiennej typu Punkt_xy

b) Punkt_rfi, ktora bedzie sluzyla do reprezentowania punktu w dwuwymiarowym ukladzie wspolrzednych biegunowych
(struktura ma trzy skladowe odpowiadające rzeczywistym wartosciom promienia r oraz kata wodzacego fi
 oraz liczbe calkowita odpowiadajaca cwiartce, w ktorej znajduje sie punkt: 1 - pierwsza cwiartka
                                                                            2 - druga cwiartka
                                                                            3 - trzecia cwiartka
                                                                            4 - czwarta cwiartka
                                                                            0 - na osiach ukladu wspolrzednych).
Strukture wyposaz w funkcje:
- pozwalajaca na wypisywanie na ekran zmiennych typu Punkt_rfi
- odczytywanie z klawiatury zmiennych typu Punkt_rfi
- przypisujaca nr cwiartki odpowiedniej zmiennej typu Punkt_rfi
- zmieniajaca wartosc kata fi wyrazona w radianach na wartosc wyrazona w stopniach
- zmieniajaca wartosc kata fi wyrazona w stopniach na wartosc wyrazona w radianach

Dodatkowo napisz funkcje pozwalajaca liczyc odleglosc euklidesowa miedzy dwoma punktami zapisanymi w ukladzie kartezjanskim:
float euclidean_distance(struct Punkt_xy, struct Punkt_xy)
Wspomoz sie wzorami przedstawionymi na tablicy.

Utworz projekt. W tym celu zdefiniuj pliki wraz z poprawna zawartoscia:
- Punkt_xy.h
- Punkt_xy.c
- Punkt_rfi.h
- Punkt_rfi.c
- main.c

Plik main.c:
W glownej funkci programu napisz program, ktory otworzy plik o nazwie 'pp_l12_polygon_xy.dat'.
Z pliku odczytaj liczbę całkowitą n i w dalszej kolejności - n par liczb rzeczywistych
x i y oddzielonych tabulatorami. Odczytane liczby nalezy zapisac w tablicy o rozmiarze n
wypelnionej zmiennymi typu Punkt_xy. Nastepnie korzystajac z funkcji euclidean_distance oblicz odleglosc
miedzy kolejnymi sasiadujacymi w tablicy punktami o wspolrzednych kartezjanskich.
Wyliczone odleglosci zapisz do pliku 'distance_xy.dat' stosujac precyzje zadana przez uzytkownika.
*/
