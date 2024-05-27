/*
 ============================================================================
 Name        : prj_contarElemento.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int contarElemento(int array[], int elemento, int tamanho){
	if(tamanho==0){
		return 0;
	}
	int ocorrencias = contarElemento(array, elemento, tamanho-1);
	if(array[tamanho-1] == elemento){
		ocorrencias++;
	}
	return ocorrencias;
}

int main(void) {
	int arr[] = {1, 2, 4, 4, 4};
	int tamanho= sizeof(arr) /sizeof(arr[0]);
	int resultado = contarElemento(arr, 4, tamanho);
	printf("Quantidade de apariçõesdo elemento: %d\n", resultado);

	return 0;
}
