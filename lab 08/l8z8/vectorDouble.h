#ifndef VECTORDOUBLE_H_INCLUDED
#define VECTORDOUBLE_H_INCLUDED

struct vectorDouble{
   int number; //liczba elementow wektora
   double* tab; //wskaznik na tab
};

struct vectorDouble * newVector(int);
void printVectorDouble(struct vectorDouble *);
void setVectorDouble(struct vectorDouble *, int, double);
double getVectorDouble(struct vectorDouble *, int);

void deleteVectorDouble(struct vectorDouble **);

#endif // VECTORDOUBLE_H_INCLUDED

