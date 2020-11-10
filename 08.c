// AUTOMATIZACION DE CARGA DE ESTRUCTURAS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TIPO GLOBAL
struct ALUMNO {
	char NOM[20];
	char SEX;
	float PROM;
} ;

#define NUM 16

void CARGAR (struct ALUMNO [], int);
void MIRAR (struct ALUMNO [], int);

int main()
{
	struct ALUMNO VEC[NUM] ;
		
	CARGAR (VEC, NUM);
	MIRAR (VEC, NUM);
	printf("\n\n\n FIN DEL PROGRAMA \n\n");
	return 0;
}

void CARGAR (struct ALUMNO V[], int N)
{
	int I;
	char NOM[][20] = {"FELIPE","ANA","LAURA","CAROLINA","PEPE","LOLA","PACO","ANIBAL","LORENA","CARLOS","LUCRECIA","ANASTASIA","MANUEL","ROBERTO","EDUARDO","ELENA"};
	char SEX[] = {'M', 'F', 'F', 'F', 'M', 'F', 'M', 'M', 'F', 'M', 'F', 'F', 'M', 'M', 'M', 'F'};
	
	for (I=0; I<N; I++)
	{
		strcpy(V[I].NOM, NOM[I]);
		V[I].SEX = SEX[I];
		V[I].PROM = (2 + rand() % 801) / 100.0;
	}
}

void MIRAR (struct ALUMNO V[], int N)
{
	int i;
	printf("\n\n\n IMPRESION DE LOS DATOS \n\n");
	printf("\n\n\t  %-15s %10s %12s \n\n", "NOMBRE", "SEXO", "PROMEDIO");
	for (i=0; i<N; i++)
		printf("\n\n\t %-15s %10c %12.2f", V[i].NOM, V[i].SEX, V[i].PROM);
	getchar();
}

