#include <stdio.h>

int main(){
	int v, maior1 = -1, maior2 = -1, maior3 = -1;
	while(1){
		scanf("%i", &v);
		if(v == 0){
			break;
		}
		if(v > maior1){
			maior3 = maior2;
			maior2 = maior1;
			maior1 = v;
		}else{
			if(v > maior2){
				maior3 = maior2;
				maior2 = v;
			}else{
				if(v > maior3){
					maior3 = v;
				}
			}
		}
	}
	printf("%i %i %i\n", maior1, maior2, maior3);
	
	return 0;	
}