#include <stdio.h>
#include <stdlib.h>
#include "division.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b;
	char menu;
	printf("En este programa demostraremos si una division de dos numeros da como resultado un numero Entero.\n");
	do{
	printf("Ingresa el primer numero :");
	scanf("%d",&a);
	printf("Ingresa el segundo numero :");
	scanf("%d",&b);
	fflush(stdin);
	printf("El resultado es : %d\n",a/b);
	
	division(a,b);
	
	printf("Presiona cualquier tecla para repetir.\nSi deseas salir presiona 0.\n");
	scanf("%c",&menu);
	}while(menu !='0');
	printf("MADE BY : Juan Carlos Calderon Davila.\n");
	system("pause");
	return 0;
}
