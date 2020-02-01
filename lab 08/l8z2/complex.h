#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

struct complex {
   float real; //czesc rzeczywista
   float imaginary; //czesc urojona
};

void readNumber(struct complex*);
void printNumber(struct complex*);

#endif // COMPLEX_H_INCLUDED
