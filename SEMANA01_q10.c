#include <stdio.h>

int main(){
	int num, milhar, centena, dezena, unidade, muda_unidade = 0;
	scanf("%i", &num);
	
	milhar = num / 1000;
	num = num % 1000;
	
	centena = num / 100;
	num = num % 100;
	
	dezena = num / 10;
	num = num % 10;
	
	unidade = num / 1;
	num = num % 1;
	
	switch(milhar){
		case 1: printf("mil ");
			break;
		case 2: printf("dois mil ");
			break;
		case 3: printf("tres mil ");
			break;
		case 4: printf("quatro mil ");
			break;
		case 5: printf("cinco mil ");
			break;
		case 6: printf("seis mil ");
			break;
		case 7: printf("sete mil ");
			break;
		case 8: printf("oito mil ");
			break;
		case 9: printf("nove mil ");
			break;
	}
	
	switch(centena){
		case 1:
			if(dezena == 0 && unidade == 0){
				printf("cem ");	
			} else{
				printf("cento ");
			} 
			break;
		case 2: printf("duzentos ");
			break;
		case 3: printf("trezentos ");
			break;
		case 4: printf("quatrocentos ");
			break;
		case 5: printf("quinhentos ");
			break;
		case 6: printf("seiscentos ");
			break;
		case 7: printf("setecentos ");
			break;
		case 8: printf("oitocentos ");
			break;
		case 9: printf("novecentos ");
			break;
	} 
	
	if(!(milhar == 0 && centena == 0)){
		printf("e ");
	}
	
	switch(dezena){
		case 1:
			if(unidade > 0){
				muda_unidade = 1;
			} else{
				printf("dez ");	
			}
			break;
		case 2: printf("vinte ");
			break;
		case 3: printf("trinta ");
			break;
		case 4: printf("quarenta ");
			break;
		case 5: printf("cinquenta ");
			break;
		case 6: printf("sessenta ");
			break;
		case 7: printf("setenta ");
			break;
		case 8: printf("oitenta ");
			break;
		case 9: printf("noventa ");
			break;		
	}
	
	if(!(dezena == 1 || dezena == 0)){
		printf("e ");
	}
	
	if(muda_unidade == 1){
		switch(unidade){
			case 1: printf("onze\n");
				break;
			case 2: printf("doze\n");
				break;
			case 3: printf("treze\n");
				break;
			case 4: printf("quatorze\n");
				break;
			case 5: printf("quinze\n");
				break;
			case 6: printf("dezeseis\n");
				break;
			case 7: printf("dezesete\n");
				break;
			case 8: printf("dezoito\n");
				break;
			case 9: printf("dezenove\n");
				break;
		}
	} else{
		switch(unidade){
			case 1: printf("um\n");
				break;
			case 2: printf("dois\n");
				break;
			case 3: printf("tres\n");
				break;
			case 4: printf("quatro\n");
				break;
			case 5: printf("cinco\n");
				break;
			case 6: printf("seis\n");
				break;
			case 7: printf("sete\n");
				break;
			case 8: printf("oito\n");
				break;
			case 9: printf("nove\n");
				break;
		}
	}

}