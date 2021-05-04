#include <stdio.h>

int main(){
	int dest, andar = 0;
	while(1){
		scanf("%i", &dest);
		if(dest < 0){
			break;
		}
		if(dest > andar){
			printf("C");
		}
		if(dest < andar){
			printf("B");
		}
		if(dest == andar){
			printf("-");
		}
		
		andar = dest;
	}
	printf("\n");
	
	return 0;	
}