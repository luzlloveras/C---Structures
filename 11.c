// MANEJO DE TIEMPOS DEL SISTEMA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	time_t T1, T2;
	
	T1 = time(0);
	
	system("pause"); // system() me permite invocar prestaciones del sistema operativo
	getchar();
	
	T2 = time(0);
	
	printf("\n\n\n\t TIEMPO TRANSCURRIDO: %d SEGUNDOS", T2-T1);
	
	return 0;
}

