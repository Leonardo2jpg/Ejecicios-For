//Tablas de multiplicar en C

#include <stdio.h>

#include <stdio.h>
 
int main()
{
	int tabla;
 
	int i; 
	
 	printf("Tablas de multiplicar del 1 al 10\n");
	printf("\nDigite el numero de tabla que desea imprimir: "); scanf("%i" , &tabla);
 
	for (i=1; i<=tabla; i++)
	{
		printf("\n %i * %i = %i " , tabla ,  i , tabla * i);
	}
 
 
 
 
 
	return 0;
 
}
