#include <stdio.h>

int main(){
	int a, b, maior, menor, diferenca;
	scanf("%i %i", &a, &b);
	
	if(a >= b){
		maior = a;
		menor = b;
	}else{
		maior = b;
		menor = a;
	}
	
	diferenca = maior - menor;
	
	if(diferenca == 0){
		printf("%d %d %d\n", maior-1 ,maior, maior+1);
	}
	if(diferenca == 1){
		printf("%d %d %d %d\n", menor-1, menor, maior, maior+1);
	}
	if(diferenca == 2){
		printf("%d %d %d %d %d\n", menor-1, menor, menor+1, maior, maior+1);
	}
	if(diferenca > 2){
		printf("%d %d %d %d %d %d\n", menor-1, menor, menor+1, maior-1, maior, maior+1);
	}

	return 0;		
}