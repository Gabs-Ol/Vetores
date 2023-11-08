#include <stdio.h>
#include <stdlib.h>

void main() {
	int vetor[7];
	int temp;

	for ( int i = 0; i < 7; i++){
		printf("Digite um número: \n");
		scanf("%d", &vetor[i]);
	}
	
	for ( int i = 0; i < 7 - 1; i++){
		for ( int j = 0; j < 7 - i - 1; j++) {
		       if (vetor[j] < vetor[j - 1]) {
		       temp = vetor[j];
	               vetor[j] = vetor[j - 1];
	               vetor[j - 1] = temp;
		       }	       
	}
}
        printf("\nValores ordenados em ordem crescente:\n");
        for ( int i = 0; i < 7; i++) {
		printf("=======>   %d   <======\n", i, temp, vetor[i]);
	}
       }


