// VECTOR DE ESTRUCTURAS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TIPO GLOBAL
struct ALUMNO {
	int LEG;
	char SEX;
	float PROM;
} ;

#define N 5

int main()
{
	struct ALUMNO VEC[N] ;
	int i;
	
	printf("\n\n\n CARGA DE LOS DATOS \n\n");
	for (i=0; i<N; i++)
	{
		printf("\n LEGAJO = ");
		scanf("%d", &(VEC[i].LEG));
		fflush(stdin);
		printf("\n SEXO = ");
		VEC[i].SEX = getchar();
		printf("\n PROMEDIO = ");
		scanf("%f", &(VEC[i].PROM));
	}

	printf("\n\n\n IMPRESION DE LOS DATOS \n\n");
	printf("\n\n\t  %10s %10s %12s \n\n", "LEGAJO", "SEXO", "PROMEDIO");
	for (i=0; i<N; i++)
		printf("\n\n\t %10d %10c %12.2f", VEC[i].LEG, VEC[i].SEX, VEC[i].PROM);


	printf("\n\n\n FIN DEL PROGRAMA \n\n");
	return 0;
}

