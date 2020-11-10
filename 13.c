// MANEJO DE TIEMPOS DEL SISTEMA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

int main()
{
	time_t T;
	printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t");
	T = time(0) + 40;
	
	do 
	{
		printf("%02d\b\b", T-time(0));	
	} while (T-time(0)+1);
	
	printf("\n\n\n");
	return 0;
}

