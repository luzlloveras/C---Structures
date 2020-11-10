// MANEJO DE TIEMPOS DEL SISTEMA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	time_t T;
	struct tm AHORA, *P;
	
	T = time(0);
	
	system("cls"); // system() me permite invocar prestaciones del sistema operativo
	
	P = localtime(&T);
	AHORA = *P;
	
	// Muestra la fecha actual
	printf("\n\n\nFECHA ACTUAL\n");
	printf("%02d : %02d : %d", AHORA.tm_mday, 1+AHORA.tm_mon, 1900+AHORA.tm_year);	
	
	// Muestra la hora actual
	printf("\n\n\nHORA ACTUAL\n");
	printf("%02d : %02d : %02d", AHORA.tm_hour, AHORA.tm_min, AHORA.tm_sec);	
	
	printf("\n\n\n");
	return 0;
}

