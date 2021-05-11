#include <stdio.h>

int main(){
	int n, i, vetor[1000];
	scanf("%i", &n);
	for(i = 0; i < n; i++){
		scanf("%i", &vetor[i]);
	}
	for(i = n-1; i >= 0; i--){
		printf("%i ", vetor[i]);
	}
	printf("\n");
	return 0;
}
