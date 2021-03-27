#include <stdio.h>

int main(){
	int valor, nota;
	scanf("%i", &valor);

	nota = valor / 100;
	valor = valor % 100;
	printf("%i notas de R$ 100\n", nota);	

	nota = valor / 50;
	valor = valor % 50;
	printf("%i notas de R$ 50\n", nota);	

	nota = valor / 20;
	valor = valor % 20;
	printf("%i notas de R$ 20\n", nota);	
	
	nota = valor / 10;
	valor = valor % 10;
	printf("%i notas de R$ 10\n", nota);	
	
	nota = valor / 5;
	valor = valor % 5;
	printf("%i notas de R$ 5\n", nota);
	
	nota = valor / 2;
	valor = valor % 2;
	printf("%i notas de R$ 2\n", nota);
	
	nota = valor / 1;
	valor = valor % 1;
	printf("%i notas de R$ 1\n", nota);
	
	return 0;
}