#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 20
#define CANT 5

struct{
    int velocidad;
    int year;
    int capacidad_nucleos;
    char tipo_cpu[MAX];
} typedef st_maquina;

void listarPCS(st_maquina maquinas[CANT]);

int main(){

    srand(time(NULL));

    st_maquina maquinas[CANT];

    int cpu;

    char tipos[6][10] = {"Intel", "AMD", "Celeron",
                        "Athlon", "Core", "Pentium"};

    for(int i = 0; i < CANT; i++)
    {
        maquinas[i].velocidad = 1 + rand() % 3;
        maquinas[i].year  = 2015 + rand() % (2024 - 2015 + 1);
        maquinas[i].capacidad_nucleos = 1 + rand() % 8;

        cpu =  0 + rand() % (5 -0 + 1);

        strcpy(maquinas[i].tipo_cpu, tipos[cpu]);
    }

    listarPCS(maquinas);

    return 0;
}

void listarPCS(st_maquina maquinas[CANT])
{
    for(int i = 0; i < CANT; i++)
    {
        printf("\n Velocidad de la maquina %d): %d", i+1, maquinas[i].velocidad);
        printf("\n año de la maquina %d): %d", i+1, maquinas[i].year);
        printf("\n Nucleos de la maquina %d): %d", i+1, maquinas[i].capacidad_nucleos);
        printf("\n procesador de la maquina %d): ", i+1);
        puts(maquinas[i].tipo_cpu);
    }
}

