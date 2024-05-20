/*
 ============================================================================
 Name        : prj_soma.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int somaDosDigitos(int n) {
	if(n==0)
		return 0;
	else
		return(n % 10) + somaDosDigitos(n/10);
}

int main (void) {
	int numero = 12345;
	int resultado = somaDosDigitos(numero);
	printf("A soma dos digitos de %d é %d\n", numero, resultado);
	return 0;
}
