#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numsorteados[6], i=0, numsorteadodigitado, numsorteadojadigitado, verificanumsorteado;
	int num[6], j=0, numdigitado, numjadigitado, verificanum, acertos = 0;
	
	printf(">> PROJETO MEGA-SENA\n\n");
	
	while(i<6){
		printf("Insira os números para a definição do gabarito de 1 à 60: ");
		scanf("%d", &numsorteadodigitado);
		
		if(numsorteadodigitado<=0 || numsorteadodigitado>60){
			printf("\nNúmero inválido!\n");
		}
		else{
			numsorteadojadigitado=0;
			for(verificanumsorteado=0;verificanumsorteado<i;verificanumsorteado++){
				if(numsorteados[verificanumsorteado]==numsorteadodigitado){
					numsorteadojadigitado=1;
					printf("\nEste número já foi digitado no gabarito!\n");
					break;
				}
			}
			if(numsorteadojadigitado==0){
				numsorteados[i]=numsorteadodigitado;
				i++;
			}
		}
	}
	
	printf("\n");
	while(j<6){
		printf("Insira um número entre 1 à 60: ");
		scanf("%d", &numdigitado);
		
		if(numdigitado<=0 || numdigitado>60){
			printf("\nNúmero inválido!\n");
		}
		else{
			numjadigitado=0;
			for(verificanum=0;verificanum<j;verificanum++){
				if(num[verificanum]==numdigitado){
					numjadigitado=1;
					printf("\nEste número já foi digitado!\n");
					break;
				}
			}
			if(numjadigitado==0){
				num[j]=numdigitado;
				j++;
			}
		}
	}
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(numsorteados[i]==num[j]){
			acertos++;
			}
		}
	}
	if(acertos==6){
		printf("\n>> PARABÉNS!\nVOCÊ CONSEGUIU A SENA COM UM TOTAL DE %d ACERTOS", acertos);	
	}
	else{
		if(acertos==5){
			printf("\n>> PARABÉNS!\nVOCÊ CONSEGUIU A QUINA COM UM TOTAL DE %d ACERTOS", acertos);
		}
		if(acertos==4){
		printf("\n>> PARABÉNS!\nVOCÊ CONSEGUIU A QUINA COM UM TOTAL DE %d ACERTOS", acertos);
		}
		else{
			printf("\n>> QUEM SABE NA PRÓXIMA!\nVOCÊ TEVE UM TOTAL DE %d ACERTOS", acertos);
		}
	}
	
	return 0;
}
