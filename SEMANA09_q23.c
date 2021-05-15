#include <stdio.h>

int main(){
	char c[10000];
	int i = 0, vez = 1, j1 = 0, j2 = 0, desistir1 = 0, desistir2 = 0;
	gets(c);
	
	while(c[i]){
		if(c[i] == ' ' || c[i] == '0'){

		}else{
			if(vez == 1 && desistir1 == 0){
				if(desistir2 == 0){
					vez = 2;
				}	
				switch(c[i]){
					case 'A': j1+=1;
						break;
					case '2': j1+=2;
						break;
					case '3': j1+=3;
						break;
					case '4': j1+=4;
						break;
					case '5': j1+=5;
						break;
					case '6': j1+=6;
						break;
					case '7': j1+=7;
						break;
					case '8': j1+=8;
						break;
					case '9': j1+=9;
						break;
					case '1': j1+=10;
						break;
					case 'J': j1+=11;
						break;
					case 'Q': j1+=12;
						break;
					case 'K': j1+=13;
						break;	
					case 'S': desistir1 = 1;
						break;	
				}
			}else if(vez == 2 && desistir2 == 0){
				if(desistir1 == 0){
					vez = 1;
				}
				switch(c[i]){
					case 'A': j2+=1;
						break;
					case '2': j2+=2;
						break;
					case '3': j2+=3;
						break;
					case '4': j2+=4;
						break;
					case '5': j2+=5;
						break;
					case '6': j2+=6;
						break;
					case '7': j2+=7;
						break;
					case '8': j2+=8;
						break;
					case '9': j2+=9;
						break;
					case '1': j2+=10;
						break;
					case 'J': j2+=11;
						break;
					case 'Q': j2+=12;
						break;
					case 'K': j2+=13;
						break;
					case 'S': desistir2 = 1;
						break;		
				}			
			}	
			if(desistir1 == 1 && desistir2 == 1){
				break;
			}

		}
		i++;
	}
	if(j1 == j2 || (j1 > 21 && j2 > 21)){
			printf("EMPATE\n");
		}else{
			if(j1 <= 21 && j1 > j2){
				printf("JOGADOR 1 VENCEU\n");
			}else{
				printf("JOGADOR 2 VENCEU\n");
			}
		}
	return 0;
}