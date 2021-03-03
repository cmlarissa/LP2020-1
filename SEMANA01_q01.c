#include <stdio.h>

int main(){
	float valor, resultado, desconto; 	
	printf("Digite o valor da compra: R$");
	scanf("%f", &valor);	
	
	if(valor <= 100){
		printf("Valor final da compra R$%.2f", valor);
	}
	if(valor > 100 && valor <= 200){
		resultado = valor * 0.05;
		desconto = valor - resultado; 
		printf("Valor final da compra R$%.2f", desconto);
	}
	if(valor > 200){
		resultado = valor * 0.10;
		desconto = valor - resultado; 
		printf("Valor final da compra R$%.2f", desconto);
	}
}
