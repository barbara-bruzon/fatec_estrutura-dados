/*Estrutura de Dados: Exercício 02 - Quadrado dos números com while e for - 26.08.2023
02. Apresentar os quadrados dos números inteiros de 15 a 200 (construa um programa utilizando for e outro programa utilizando while.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i =15;
	
	printf("Imprimindo o quadrados do números entre 15 e 200 :D\n");
	
	while (i<=200){
		printf("\n%d^2 = %d", i, i*i);
		i++;
	}
	return 0;
}
