/*
 ============================================================================
 Name        : prj_exercicio1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int contpar = 0, contimpar = 0, num = -1;

	while (num != 0) {
		printf("Entre com um número: para encerrar, digite 0: ");
		scanf("%d", &num);

		if(num != 0) {
			if (num % 2 == 0) {
				contpar = contpar + 1; // contpar++;
			} else{
				contimpar = contimpar + 1; // contimpar++;
			}
		}
	}
	printf("A quantidade de números pares é: %d/n", contpar);
	printf("A quantidade de números ímpares é: %d\n", contimpar);

	return 0;
}
