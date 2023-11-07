#include <stdio.h>
#include <stdlib.h>

int main() {
	int vetor[7];
	int temp;

	for ( int i = 0; i < 7; i++){
		printf("Digite um número: \n");
		scanf("%d", &vetor[i]);
	}
	
	for ( int i = 0; i < 7 - 1; i++){
		for ( int j = 0; j < 7 - i - 1; j++) {
		       if (vetor[i] > vetor[j + 1]) {
		       temp = vetor[j];
	               vetor[j] = vetor[j + 1];
	               vetor[j + 1] = temp;
		       }	       
	}
}
        for (int i = 0; i < 7; i++) {
		printf("%d\n", vetor[i]);
	}
       return 0;
       }


