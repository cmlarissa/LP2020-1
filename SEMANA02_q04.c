#include <stdio.h>

int main(){
	int n1, n2, n3;
	scanf("%i %i %i", &n1, &n2, &n3);
	if(n1 == 1 && n2 == 1 || n2 == 1 && n3 == 1 || n3 == 1 && n1 == 1){
		printf("APROVADO COM A");
	}
	if(n1 == 2 && n2 == 2 || n2 == 2 && n3 == 2 || n3 == 2 && n1 == 2){
		printf("APROVADO COM B");
	}
	if(n1 == 3 && n2 == 3 || n2 == 3 && n3 == 3 || n3 == 3 && n1 == 3){
		printf("APROVADO COM C");
	}
	if(n1 == 4 && n2 == 4 || n2 == 4 && n3 == 4 || n3 == 4 && n1 == 4){
		printf("REPROVADO COM D");
	}
	if(n1 !=  n2  && n2 != n3 && n3 != n1){
		printf("INCONCLUSIVO");	
	}
}