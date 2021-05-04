#include <stdio.h>

int main(){
	int v, resultado = 0, v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0, media;
	while(1){
		scanf("%i", &v);
		if(v < 0){
			break;
		}	
		v5 = v4;
		v4 = v3;
		v3 = v2;
		v2 = v1;
		v1 = v;
		media = (v1 + v2 + v3 + v4 + v5)/5;
	}
	if(media > 1000){
		printf("DEU RUIM\n");
	}else{
		printf("TURNO TRANQUILO\n");
	}
	
	return 0;
}