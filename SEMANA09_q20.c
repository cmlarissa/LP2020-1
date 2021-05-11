#include <stdio.h>

int main(){
	int i, j, maior, posicao, vetor1[10], vetor2[10];
	
	for(i = 0; i < 10; i++){
		scanf("%i", &vetor1[i]);
	}
	for(i = 0; i < 10; i++){
		maior = -100000;
		for(j = 0; j < 10; j++){
			if(vetor1[j] > maior){
				maior = vetor1[j];
				posicao = j;
			}
		}
		vetor2[i] = maior;
		vetor1[posicao] = -100000;
	}
	for(i = 9; i >= 0; i--){
		printf("%i ", vetor2[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("%i ", vetor2[i]); 
	}
	printf("\n");	
	return 0;
}