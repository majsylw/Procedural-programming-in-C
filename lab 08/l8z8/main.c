#include <stdio.h>
#include <stdlib.h>
#include "vectorDouble.h"

int main()
{
    //deklaracja zmiennych a, b
    //bedacych strukturami
    struct vectorDouble * a = newVector(5);
    printVectorDouble(a);
    printf("\n");
    setVectorDouble(a, 0, 7);
    setVectorDouble(a, 4, 3);
    printVectorDouble(a);
    printf("\nNa pozycji %i jest liczba %lf", 2, getVectorDouble(a, 2));

    deleteVectorDouble(&(a->tab));
    free(a);
    return 0;
}
