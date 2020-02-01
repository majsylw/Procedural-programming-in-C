#ifndef COMPLEXC_H_INCLUDED
#define COMPLEXC_H_INCLUDED

struct complex {
   float real; //czesc rzeczywista
   float imaginary; //czesc urojona
};

void readNumber(struct complex*);
void printNumber(struct complex);

struct complex add(struct complex, struct complex);
struct complex substract(struct complex, struct complex);
struct complex multiple(struct complex, struct complex);
struct complex conj(struct complex);
float modules(struct complex);
float arg(struct complex);

#endif // COMPLEX_H_INCLUDED
