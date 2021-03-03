#include <stdio.h>

int main(){
	int a, b;
	printf("Informe 2 numeros inteiros:\n");
	scanf("%i %i", &a, &b);
	printf("%i %i %i %i %i %i", a-1, a, a+1, b-1, b, b+1);
}