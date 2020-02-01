/*Programowanie proceduralne
grupa P00-07f
06.06.2018 Kolokwium
imie:
nazwisko:
indeks:
*/

/*Zadanie 4 (10 pkt)

Napisz program, który pyta uzytkownika o liczbe calkowita n, a następnie alokuje tablice
n liczb rzeczywistych (2 pkt). Nastepnie do tablicy wpisz liczby losowe z przedzialu 0-99
i uporzadkuj je rosnąco (2 pkt). Wynik zapisz do pliku o nazwie podanej przez uzytkownika (5 pkt).

W programie nalezy sprawdzac, czy plik do zapisu zostal poprawnie otwarty (1 pkt).
*/


//ZAD. 4 - proponowane rozwiązanie

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i,j;
    double *tab;
    double tmp;
    char nazwa[20];
    FILE* fptr;

    printf("podaj rozmiar tablicy: ");
    scanf("%d",&n);
    tab=malloc(n*sizeof(*tab));

    for(i=0;i<n;i++){
       tab[i]=rand()%100;
       printf("\n%lf",tab[i]);
    }

    //SORTOWANIE
	for (i = 0; i<n; i++){
		for (j=0; j<n-1-i; j++){
			if (tab[j] > tab[j+1]){
            tmp=tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=tmp;
			}
		}
    }

    printf("\npodaj nazwe pliku do zapisu (z roz.): ");
    scanf("%s",nazwa);
    printf("\n podana nazwa=%s",nazwa);

    fptr = fopen(nazwa,"w");
    for(i=0;i<n;i++){
     if(fptr != NULL){
           fprintf(fptr,"%f\n",tab[i]);}
     else{
        printf("ERROR");}
    }

    fclose(fptr);
    free(tab);
    return 0;
}
