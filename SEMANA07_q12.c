#include <stdio.h>

int main(){
	int v, i;
	scanf("%i", &v);
	for(i = 1; i <= v; i++){
		if(i % 4 == 0){
			printf("PIN");
		}else{
			printf("%i", i);
		}
		if(i != v){
			printf(",");
		}else{
			printf("\n");
		}
	}
	
	return 0;	
}