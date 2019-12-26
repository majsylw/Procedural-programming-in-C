#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Punkt_xy{
    float x;
    float y;
    int cwiartka;
};

int wyznacz_cwiartke(float x, float y){
    if(x == 0 || y == 0)
        return 0;
    if(x > 0 && y > 0)
        return 1;
    if(x < 0 && y < 0)
        return 2;
    if(x < 0 && y < 0)
        return 3;
    if(x > 0 && y < 0)
        return 4;
}

void readPoint_xy(struct Punkt_xy* p){
    printf("Wspolrzedna x: ");
    scanf("%f",&(p->x));

    printf("Wspolrzedna y: ");
    scanf("%f",&(p->y));

    (p->cwiartka) = wyznacz_cwiartke(p->x, p->y);
}

void printPoint_xy(struct Punkt_xy* p){
    printf("[%.1f,%.1f]\n",p->x,p->y);
}

int podaj_cwiartke(struct Punkt_xy p){
    return p.cwiartka;
}

struct Punkt_rfi{
    float r;  // >= 0
    float fi; //radiany -> [0,2pi)
    int cwiartka;
};

int wyznacz_cwiartke_r(float kat){
    if (kat == M_PI/2 || kat == M_PI || kat == 3*M_PI/2 || kat == 2*M_PI)
        return 0;
    if (kat < M_PI/2)
        return 1;
    if (kat < M_PI)
        return 2;
    if (kat < 3*M_PI/2)
        return 3;
    if (kat < 2*M_PI)
        return 4;
}

void readPoint_rfi(struct Punkt_rfi* p){
    printf("Primien r: ");
    scanf("%f",&(p->r));

    printf("Kat fi [rad]: ");
    scanf("%f",&(p->fi));
    while((p->fi) >= 2*M_PI)
        (p->fi) -= 2*M_PI;
    while((p->fi) < 0)
        (p->fi) += 2*M_PI;
    p->cwiartka = wyznacz_cwiartke_r(p->fi);
}

void printPoint_rfi(struct Punkt_rfi* p){
    printf("r = %.1f, fi = %.1f rad\n",p->r,p->fi);
}

float convert_to_degree(struct Punkt_rfi p){
    return p.fi*180/M_PI;
}

struct Punkt_rfi convert_to_polar(struct Punkt_xy p){
    struct Punkt_rfi wynik;
    wynik.cwiartka = p.cwiartka;
    wynik.r = sqrt(p.x*p.x+p.y*p.y);
    if(p.x>0 && p.y>=0)
        wynik.fi = atan(p.y/p.x);
    if(p.x>0 && p.y<0)
        wynik.fi = atan(p.y/p.x)+2*M_PI;
    if(p.x<0)
        wynik.fi = atan(p.y/p.x)+M_PI;
    if(p.x==0 && p.y>0)
        wynik.fi = M_PI/2;
    if(p.x==0 && p.y<0)
        wynik.fi = 3*M_PI/2;
    if(p.x==0 && p.y==0)
        wynik.fi = 0;
    return wynik;
};

struct Punkt_xy convert_to_cartesian(struct Punkt_rfi p){
    struct Punkt_xy wynik;
    wynik.cwiartka = p.cwiartka;
    wynik.x = p.r*cos(p.fi);
    wynik.y = p.r*sin(p.fi);
    return wynik;
};

int main(){
    struct Punkt_xy punkt1;
    struct Punkt_rfi punkt2;

    readPoint_xy(&punkt1);
    printf("Punkt znajduje sie w %d. cwiartce.\n", podaj_cwiartke(punkt1));

    punkt2 = convert_to_polar(punkt1);

    printPoint_rfi(&punkt2);
    printf("Kat fi wynosi %.1f stopni.\n", convert_to_degree(punkt2));

    struct Punkt_xy *tab_xy;
    struct Punkt_rfi *tab_rfi;
    int i, n;
    //otworzenie pliku do odczytu
    FILE *fptr = fopen("pp_l12_dane_xy.dat","r");

    //jesli otwarto plik poprawnie
    if( fptr != NULL ){

        //wczytaj dane
        fscanf(fptr,"%i\n",&n);
        printf("\n%i\n", n);
        //struct Punkt_xy tab_xy[n];
        tab_xy = malloc(n * sizeof(struct Punkt_xy));
        tab_rfi = malloc(n * sizeof(struct Punkt_rfi));
        fscanf(fptr, "x\ty\n");
        for(i=0; i < n; ++i){
            fscanf(fptr,"%f\t%f\n", &tab_xy[i].x, &tab_xy[i].y);
            tab_rfi[i] = convert_to_polar(tab_xy[i]);
            //printPoint_rfi(&tab_rfi[i]);
            //printf("Kat fi wynosi %.1f stopni.\n", convert_to_degree(tab_rfi[i]));
        }
        //wypisz dane do plikow
        FILE *fptrz1 = fopen("pp_l12_dane_xy1.dat","w");
        if(fptrz1 != NULL){
            fprintf(fptrz1, "%i\n", n);
            fprintf(fptrz1, "x\ty\n");
            for(i=0; i < n; ++i){
                fprintf(fptrz1, "%f\t%f\n", tab_xy[i].x, tab_xy[i].y);
            }
        }
        fptrz1 = fopen("pp_l12_dane_rfi1.dat","w");
        if(fptrz1 != NULL){
            fprintf(fptrz1, "%i\n", n);
            fprintf(fptrz1, "r\tfi[rad]\n");
            for(i=0; i < n; ++i){
                fprintf(fptrz1, "%f\t%f\n", tab_rfi[i].r, tab_rfi[i].fi);
            }
        }
        fptrz1 = fopen("pp_l12_dane_rfi2.dat","w");
        if(fptrz1 != NULL){
            fprintf(fptrz1, "%i\n", n);
            fprintf(fptrz1, "r\tfi[deg]\n");
            for(i=0; i < n; ++i){
                fprintf(fptrz1, "%f\t%f\n", tab_rfi[i].r, convert_to_degree(tab_rfi[i]));
            }
        }

        struct Punkt_xy punkty[] = {{ 0.5, -0.5 }, { 1, 1 }, { 1, 1.5 }, { -1.5, 1.5 }, { -0.5, -0.5 }};
        struct Punkt_rfi punkty2[5];
        //wypisz dane na ekran przed sortowaniem
        fptrz1 = fopen("pp_l12_polygon_xy.dat","w");
        if(fptrz1 != NULL){
            fprintf(fptrz1, "%i\n", 5);
            fprintf(fptrz1, "x\ty\n");
            fprintf(fptrz1, "%f\t%f\n", 0.5, -0.5);
            fprintf(fptrz1, "%f\t%f\n", 1, 1);
            fprintf(fptrz1, "%f\t%f\n", 1, 1.5);
            fprintf(fptrz1, "%f\t%f\n", -1.5, 1.5);
            fprintf(fptrz1, "%f\t%f\n", -0.5, -0.5);
        }

        fptrz1 = fopen("pp_l12_polygon_rfi1.dat","w");
        if(fptrz1 != NULL){
            fprintf(fptrz1, "%i\n", 5);
            fprintf(fptrz1, "r\tfi[rad]\n");
            for(i=0; i < 5; ++i){
                punkty2[i] = convert_to_polar(punkty[i]);
                fprintf(fptrz1, "%f\t%f\n", punkty2[i].r, punkty2[i].fi);
            }
        }


        fptrz1 = fopen("pp_l12_polygon_rfi2.dat","w");
        if(fptrz1 != NULL){
            fprintf(fptrz1, "%i\n", 5);
            fprintf(fptrz1, "r\tfi[deg]\n");
            for(i=0; i < 5; ++i){
                punkty2[i] = convert_to_polar(punkty[i]);
                fprintf(fptrz1, "%f\t%f\n", punkty2[i].r, convert_to_degree(punkty2[i]));
            }
        }

        fclose(fptrz1);
    } else {
        printf("\nWystapil blad z otwarciem pliku!");
    }

    free(tab_xy);
    free(tab_rfi);
    fclose(fptr);
    return 0;
}
