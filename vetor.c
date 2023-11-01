#include <stdio.h>
#include <stdlib.h>

int main (int argv, char argc[]){
	int vetor[10];
	int i;

	for(i = 0; i < 10; i++){
		printf("Digite um número: \n");
		scanf("%d", &vetor[i]);
		vetor[i] = vetor[i] * 2;
	}
	for (i = 0; i < 10; i++){
		printf("Posição %d: %d\n", i, vetor[i]);
	}
	return 0;
}
