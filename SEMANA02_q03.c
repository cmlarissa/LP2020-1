#include <stdio.h>

int main(){	
	float a, b, c, maior, soma;
	scanf("%f %f %f", &a, &b, &c);
	
	if(a >= b && a >= c){
		maior = a;
		soma = b + c;
	}
	if(b >= a && b >= c){
		maior = b;
		soma = a + c;
	}
	if(c >= a && c >= b){
		maior = c;
		soma = a + b;
	}		
	if(soma > maior){
		if(a == b && a == c){
			printf("EQUILÁTERO\n");		
		}
		else{
			if(a == b || a == c || b == c){
				printf("ISÓSCELES\n");
			}
			else{
				if(a != b && a != c && b != c){
					printf("ESCALANEO\n");
				}
			}
		}	
	}
	else{
		printf("NÃO FORMA\n");
	}	
}