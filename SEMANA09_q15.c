#include <stdio.h>

int main(){
	int v, resultado = 0;
	while(1){
		scanf("%i", &v);
		if(v < 0){
			break;
		}
		if(v > 1000){
			resultado = 1;
		}
	}
	if(resultado == 1){
		printf("DEU RUIM\n");	
	}else{
		printf("TURNO TRANQUILO\n");
	}
	
	return 0;
}