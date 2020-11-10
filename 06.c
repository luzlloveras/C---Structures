// MODULARIZAR VECTOR DE ESTRUCTURAS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TIPO GLOBAL
struct ALUMNO {
	int LEG;
	char SEX;
	float PROM;
} ;

#define NUM 10

void CARGAR (struct ALUMNO [], int);
void MIRAR (struct ALUMNO [], int);

int main()
{
	struct ALUMNO VEC[NUM] ;
	int i;
	
	CARGAR (VEC, NUM);
	MIRAR (VEC, NUM);
		
	printf("\n\n\n FIN DEL PROGRAMA \n\n");
	return 0;
}

void CARGAR (struct ALUMNO V[], int N)
{
	int i;
	for (i=0; i<N; i++)
	{
		V[i].LEG = 10000 + rand() % 90000;
		V[i].SEX = rand()%2 ? 'M' : 'F';
		V[i].PROM = (2 + rand() % 801) / 100.0;
	}
}

void MIRAR (struct ALUMNO V[], int N)
{
	int i;
	printf("\n\n\n IMPRESION DE LOS DATOS \n\n");
	printf("\n\n\t  %10s %10s %12s \n\n", "LEGAJO", "SEXO", "PROMEDIO");
	for (i=0; i<N; i++)
		printf("\n\n\t %10d %10c %12.2f", V[i].LEG, V[i].SEX, V[i].PROM);
}

