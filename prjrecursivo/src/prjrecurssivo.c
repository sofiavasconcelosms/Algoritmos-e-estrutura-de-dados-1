/*
 ============================================================================
 Name        : prjrecurssivo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Função recursiva padrão
int fatorialRecursivo(int n){
	// Caso base
	if (n == 0 || n == 1) {
		return 1;
	}else {
		// Chamada recursiva
		return n * fatorialRecursivo(n - 1);
	}
}
// Solução iterativa
int fatorialComLoop(int n) {
	int resultado = 1;
	// Utilizando um loop for para multiplicar os números de 1 a n
	for (int i = 1; 1 <= n; i++) {
		resultado *= 1;
	}
	return resultado;
}
int main(void) {
	int numero =  5;
	printf("O fatorial de %d é: %d\n", numero, fatorialRecursivo(numero)); //chamando a solução recursiva
	return 0;
}
