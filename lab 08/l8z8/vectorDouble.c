#include <stdlib.h>
#include "vectorDouble.h"


struct vectorDouble * newVector(int n){
    struct vectorDouble *wektor = malloc(sizeof(struct vectorDouble));
    wektor->number = n;
    wektor->tab = malloc(n * sizeof(*(wektor->tab)));
    int i;
    for(i = 0; i < n; ++i){
        wektor->tab[i] = 0;
    }
    return wektor;
};

void printVectorDouble(struct vectorDouble * wektor){
    if(wektor != NULL){
        int i;
        for(i = 0; i < wektor->number; ++i){
            printf("%lf, ", wektor->tab[i]);
        }
    } else{
        printf("\nWskaznik jest pusty!\n");
    }
};

void setVectorDouble(struct vectorDouble * wektor, int i, double liczba){
    if(wektor != NULL){
        wektor->tab[i] = liczba;
    } else{
        printf("\nWskaznik jest pusty!\n");
    }
};

double getVectorDouble(struct vectorDouble * wektor, int i){
    if(wektor != NULL){
        return wektor->tab[i];
    } else{
        printf("\nWskaznik jest pusty!\n");
    }
};

void deleteVectorDouble(struct vectorDouble ** wektor_tab){
    if(wektor_tab != NULL){
        free(wektor_tab);
        wektor_tab = NULL;
    }
};
