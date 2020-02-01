#ifndef TROJMIAN_H_INCLUDED
#define TROJMIAN_H_INCLUDED

struct trojmian{
    float a;
    float b;
    float c;
};

void readTrojmian(struct trojmian *);
void printTrojmian(struct trojmian);

struct trojmian dodawanie(struct trojmian, struct trojmian);
struct trojmian odejmowanie(struct trojmian, struct trojmian);

struct trojmian mnozenie_stala(struct trojmian, float);
float wartosc_wielomianu(struct trojmian, float);

float podaj_wspolczynnik(struct trojmian, char);
void zmien_wspolczynnik(struct trojmian *, char, float);

#endif // TROJMIAN_H_INCLUDED
