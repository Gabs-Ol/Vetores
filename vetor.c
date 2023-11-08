#include <stdio.h>
#include <stdlib.h>

int main (int argv, char argc[]){

	int vetor[10];
	int i;

	for(i = 0; i < 10; i++){
		printf("Digite o %dº número: \n", i+1);
		scanf("%d", &vetor[i]);
		vetor[i] = vetor[i] * 2;
	}

	for (i = 0; i < 10; i++){
		printf("Posição %d: %d\n", i, vetor[i]);
	}

	return 0;
} 
