#include <stdio.h>

int main(){
	int verf, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, p1, p2, p3, p4, p5;
	scanf("%i %i %i %i %i %i %i %i %i %i %i %i %i", &verf, &c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &c10, &c11, &c12);

	p1 = c1 + c3 + c5 + c7 + c9 + c11;
	p2 = p1 * 3;
	p3 = c2 + c4 + c6 + c8 + c10 + c12;
	p4 = p3 + p2;
	p5 = p4 % 10;
	p5 = 10 - p5;  
	
	if(p5 == verf){
		printf("S");
	} else{
		printf("N");
	}
	
	return 0;
}