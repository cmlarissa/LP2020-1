#include <stdio.h>

int main(){	
	int a, b;
	printf("Informe 2 numeros inteiros:\n");
	scanf("%i %i", &a, &b);
	
	if(a < b){
		printf("%i %i", a, b);	
	}else{
		printf("%i %i", b, a);
	}
}