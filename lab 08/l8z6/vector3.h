#ifndef VECTOR3_H_INCLUDED
#define VECTOR3_H_INCLUDED

struct vector3{
   float x; //wspolrzedna x
   float y; //wspolrzedna y
   float z; //wspolrzedna z
};

void readVector(struct vector3*);
void printVector(struct vector3);

struct vector3 add(struct vector3, struct vector3);
void changeSign(struct vector3*);
struct vector3 substract(struct vector3, struct vector3);
float scalarMultiple(struct vector3, struct vector3);
struct vector3 vectorMultiple(struct vector3, struct vector3);
float norm(struct vector3);
struct vector3 constMultiple(struct vector3, float);

#endif // VECTOR3_H_INCLUDED

