#include <stdio.h>

int main(){
	int i, soma = 1, maior, vetor[100];
	for(i = 0; i < 100; i++){
		scanf("%i", &vetor[i]);
	}
	for(i = 0; i < 100; i++){
		if(vetor[i] == vetor[i+1]){
			soma++;
			if(soma > maior){
				maior = soma; 	
			}
		}else{
			soma = 1;
		}
	}
	printf("%i\n", maior);
	
	return 0;
}