/*Desenvolver um projeto para vender ingressos para um cinema.

O tamanho do cinema (quantidade de lugares) é de 20 Fileiras com 30 assentos por
fileiras. Usar uma matriz de inteiros para gerenciar a venda de ingressos. Ao
iniciar a aplicação todos os assentos estão disponíveis. Esse controle é feito
armazenado 0 em todas as posições da matriz. O usuário deverá informar o valor
do ingresso na tarifa cheia ao iniciar a aplicação.

Executar a venda de ingressos até quando o usuário desejar ou enquanto existirem
ingressos disponíveis para venda. Ao vender um ingresso, perguntar: assento o
cliente deseja sentar (linha e coluna). tipo de ingresso (1=normal, 2=meia e 3 =
cortesia) Atenção, não vender um assento inexistente ou já vendido! Ao finalizar
a aplicação mostrar: total de ingressos normais vendidos. total de ingressos
meia entrada vendidos. total de ingressos cortesia fornecidos. Total
arrecadado*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, f, c, assento[20][30], escolha=1, escolha_tipo_ing, cont_normal=0, cont_meia=0, cont_cortesia=0;
	float val_ingresso, total_arrecadado=0;
	
	for(i=0;i<20;i++){
		for(j=0;j<30;j++){
			assento[i][j] = 0;
    	}
	}

	printf("[!] Utilize VÍRGULA, não PONTO FINAL.\n\n");
	printf("[PROJETO CINEMA] VENDA DE INGRESSOS\n");
	
	while(escolha==1){
		printf("\nHá INGRESSOS a serem COMPRADOS?");
		printf("\n 1. SIM");
		printf("\n 2. NÃO");
		printf("\nResposta: ");
		scanf("%i", &escolha);
		if(escolha==1){
			printf("\n[SIM] Insira o VALOR do INGRESSO: R$");
			scanf("%f", &val_ingresso);
			total_arrecadado += val_ingresso;
			
			printf("\nQual é o ASSENTO?");
			printf("\n Digite o número da FILEIRA: ");
			scanf("%i", &f);
			if(f>=0 && f<20){
				printf(" Digite o número da COLUNA: ");
				scanf("%i", &c);
				if(c>=0 && c<30 && assento[f][c]==0){					
					printf("\nQual é o TIPO de ingresso?");
					printf("\n 1. NORMAL");
					printf("\n 2. MEIA");
					printf("\n 3. CORTESIA");
					printf("\nResposta: ");
					scanf("%i", &escolha_tipo_ing);
					
					for(i=0;i<20;i++){
						for(j=0;j<30;j++){
							if(i==f && j==c){
								assento[i][j] = escolha_tipo_ing;
								if(escolha_tipo_ing==1){
									cont_normal++;
								} else if(escolha_tipo_ing==2){
									cont_meia++;
								} else if(escolha_tipo_ing==3){
									cont_cortesia++;
								}
							}
						}
					}	
				}
				else{
					printf("\n[*] POSIÇÃO INVÁLIDA ou assento JÁ VENDIDO!\n");
					total_arrecadado -= val_ingresso;
					escolha = 1;	
				}	
			}
			else{
				printf("\n[*] Insira uma POSIÇÃO VÁLIDA!\n");
				escolha = 1;
			}
		} else if(escolha==2){
			printf("\n[NÃO] Agradecemos a preferência!");
			break;
		}
		else{
			printf("\n[*] Insira uma OPÇÃO VÁLIDA!\n");
			escolha = 1;
		}
	}
	printf("\n\nQuantidade de INGRESSOS VENDIDOS");
	printf("\n Ingressos NORMAIS: %i", cont_normal);
	printf("\n Ingressos de MEIA ENTRADA: %i", cont_meia);
	printf("\n Ingressos de CORTESIA: %i", cont_cortesia);
	
	printf("\n\nValor ARRECADADO");
	printf("\n R$%.2f", total_arrecadado);

return 0;
}
