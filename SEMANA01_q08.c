#include <stdio.h>

int main(){
	float x, y;
	scanf("%f %f", &x, &y);
	
	if((x - 11 > 58 && x + 11 <= 98 && y - 11 >= 204 && y + 11 < 244 ) || 
	(x - 11 >= 750 && x + 11 < 790 && y - 11 >= 204 && y + 11 < 244)){
		printf("GOLACO\n");
	} else if(x - 11 > 58 && x + 11 < 790 && y + 11 < 244) {
		printf("GOL\n");
	} else{
		printf("UHHH\n");
	}
	
	return 0;
}