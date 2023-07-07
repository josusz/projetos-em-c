#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int cont_acertos=0, cont_erros=0;

int main(void){
	system("color 0F");
	setlocale(LC_ALL,"Portuguese");
	int opcao_selecionada;
	
	printf("\nCarregando"); printf(".", Sleep(500)); printf(".", Sleep(500)); printf(".", Sleep(500));
	Sleep(500); system("cls");
	
	printf("\n[QUIZ]Teste os seus conhecimentos sobre L�gica de Programa��o com este mini-game de perguntas e respostas. \\o/", Sleep(500));	
	printf("\n\nPressione qualquer tecla para visualizar o MENU de op��es...\n\n", Sleep(600)); getch();			
			
	printf(  " [1. Instru��es]", Sleep(500));
	printf("\n [2. Jogar     ]", Sleep(500));
	printf("\n [3. Gabarito  ]\n\n", Sleep(500));
	
	opcao_selecionada=getch();
	switch(opcao_selecionada){
		case '1':
			system("cls");
			printf("\nNo total s�o 10 perguntas objetivas com alternativas de A at� D, escolha uma delas e pressione ENTER.");
			printf("\nAp�s o fim de todas as perguntas, ser� exibido o seu placar.", Sleep(500));
			printf("\nDivirta-se! :)\n\n", Sleep(500));
			printf("Pressione qualquer tecla para RETORNAR...\n\n", Sleep(400));
			getch();system("cls");
		return main();
			
		case '2':
			cont_acertos=0, cont_erros=0;
			pergunta1
			(&cont_acertos, &cont_erros);
			pergunta2
			(&cont_acertos, &cont_erros);
			pergunta3
			(&cont_acertos, &cont_erros);
			pergunta4
			(&cont_acertos, &cont_erros);
			pergunta5
			(&cont_acertos, &cont_erros);
			pergunta6
			(&cont_acertos, &cont_erros);
			pergunta7
			(&cont_acertos, &cont_erros);
			pergunta8
			(&cont_acertos, &cont_erros);
			pergunta9
			(&cont_acertos, &cont_erros);
			pergunta10
			(&cont_acertos, &cont_erros);
		placar
		(cont_acertos, cont_erros);
		
		case '3':
			if(cont_acertos>0 || cont_erros>0){
				system("cls");
				printf("\nVoc� pode observar abaixo as alternativas das RESPOSTAS para as atuais perguntas que foram propostas neste mini-game."); Sleep(600);
				printf("\n\n [#1. B]"); printf("   [#2. D]"); printf("   [#3. A]"); printf("   [#4. C]"); printf("   [#5.  A]");
				printf("\n [#6. C]"); printf("   [#7. C]"); printf("   [#8. C]"); printf("   [#9. D]"); printf("   [#10. C]\n\n");
				printf("Pressione qualquer tecla para RETORNAR...\n\n", Sleep(400));
				getch();system("cls");
				return main();
			}
			else{
				system("cls");
				printf("\nJogue primeiro o mini-game para LIBERAR o acesso ao gabarito!\n\n");
				printf("Pressione qualquer tecla para RETORNAR...\n\n", Sleep(400));
				getch();system("cls");
				return main();
			}
		
		default:
			printf("[!] Escolha uma op��o V�LIDA!\n\n");
			Sleep(950);
			system("cls");
		return main();
	}
}

char resposta;

void pergunta1(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");
	printf("\n#1. Onde as vari�veis ficam armazenadas?\n");
	Sleep(1000);
	printf("\n [a. No programa/software.                           ]");
	printf("\n [b. Na mem�ria RAM do computador.                   ]");
	printf("\n [c. No banco de dados.                              ]");
	printf("\n [d. No banco de dados, no software e na mem�ria RAM.]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='b' || resposta =='B'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");	
			(*cont_acertos)++;
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"b\".");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_erros)++;
		}
	getch();
}
void pergunta2(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");
	printf("\n#2. O que significa 'concatenar'?\n");
	Sleep(1000);
	printf("\n [a. Trata-se de um conjunto de caracteres.                            ]");
	printf("\n [b. Configurar o tipo de uma vari�vel.                                ]");
	printf("\n [c. Dividir duas vari�veis.                                           ]");
	printf("\n [d. Unir dados de modo l�gico ou manter liga��o ou conex�o entre eles.]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='d' || resposta =='D'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"d\".");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_erros)++;
		}
	getch();
}
void pergunta3(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");	
	printf("\n#3. O que s�o arrays?\n");
	Sleep(1000);
	printf("\n [a. S�o estruturas de dados homog�neas que possibilitam o armazenamento de grupos de valores do mesmo tipo em uma �nica vari�vel.                     ]");
	printf("\n [b. S�o vari�veis espec�ficas para armazenamento de n�meros inteiros.                                                                                 ]");
	printf("\n [c. Trata-se de uma forma de planejamento do algoritmo.                                                                                               ]");
	printf("\n [d. S�o formas de estruturar ou organizar dados na mem�ria RAM do computador, de modo que voc� possa utilizar estes dados de uma forma mais eficiente.]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='a' || resposta =='A'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"a\".");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");	
			(*cont_erros)++;
		}
	getch();
}
void pergunta4(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");
	printf("\n#4. Marque a op��o correta que define a estrutura de repeti��o 'PARA - AT�' (Em ingl�s, \"FOR\"):\n");
	Sleep(1000);
	printf("\n [a. Caso o resultado seja falso o programa encerra essa estrutura e volta para o fluxo do programa.                                                                                      ]");
	printf("\n [b. Estrutura de repeti��o que realiza um teste l�gico no final da estrutura, executando ao menos uma vez o conjunto de intru��es antes de verificar a condi��o testada.                 ]");
	printf("\n [c. Estrutura de repeti��o utilizada quando j� existe um t�rmino determinado ou limites fixos.                                                                                           ]");
	printf("\n [d. Estrutura de repeti��o que realiza um teste l�gico no in�cio da estrutura e sempre que o teste l�gico resultar em VERDADEIRO, os comandos associados a esta estrutura s�o executados.]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='c' || resposta =='C'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"c\".");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");	
			(*cont_erros)++;
		}
	getch();
}
void pergunta5(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");
	printf("\n#5. Marque a op��o que melhor define o conceito de L�GICA na �rea da tecnologia:\n");
	Sleep(1000);
	printf("\n [a. Organiza��o e planejamento das instru��es em um algoritmo, a fim de viabilizar a implanta��o de um programa/software.]");
	printf("\n [b. O encadeamento coerente de alguma coisa que obedece a certas conven��es e regras.                                    ]");
	printf("\n [c. Significa encadear uma s�rie de instru��es para que se possa chegar � solu��o de um problema.                        ]");
	printf("\n [d. Maneira rigorosa de raciocinar.                                                                                      ]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='a' || resposta =='A'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"a\".");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_erros)++;	
		}
	getch();
}
void pergunta6(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");
	printf("\n#6. O que � um algoritmo?\n");
	Sleep(1000);
	printf("\n [a. S�o a��es ditas ao computador para ele executar.                                                                                                                             ]");
	printf("\n [b. � a solu��o de um problema.                                                                                                                                                  ]");
	printf("\n [c. Trata-se de uma sequ�ncia de passos, conhecida como um conjunto de instru��es para se chegar a um determinado objetivo.                                                      ]");
	printf("\n [d. Permite realizar opera��es l�gicas e aritm�ticas utilizando apenas dois d�gitos ou dois estados (sim ou n�o, verdadeiro ou falso, tudo ou nada, ligado ou desligado, 1 ou 0).]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='c' || resposta =='C'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"c\".");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_erros)++;	
		}
	getch();
}
void pergunta7(int *cont_acertos, int *cont_erros){
	system("cls");			
	system("color 0F");
	printf("\n#7. Qual a diferen�a entre a fun��o scanf e a fun��o gets na leitura de strings na linguagem C?\n");
	Sleep(1000);
	printf("\n [a. A fun��o gets n�o existe.                               ]");
	printf("\n [b. scanf l� strings completas e gets l� apenas uma palavra.]");
	printf("\n [c. gets l� strings completas e scanf l� apenas uma palavra.]");
	printf("\n [d. A fun��o scanf n�o l� strings.                          ]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='c' || resposta =='C'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"c\".");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_erros)++;	
		}	
	getch();
}
void pergunta8(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");	
	printf("\n#8. Em linguagem C, qual a diferen�a entre = e ==?\n");
	Sleep(1000);
	printf("\n [a. = � o operador de igualdade e == � o operador diferente.   ]");
	printf("\n [b. = � o operador de igualdade e == � o s�mbolo de atribui��o.]");
	printf("\n [c. == � o operador de igualdade e = � o s�mbolo de atribui��o.]");
	printf("\n [d. N�o existe diferen�a.                                      ]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='c' || resposta =='C'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"c\".");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_erros)++;
		}
	getch();	
}
void pergunta9(int *cont_acertos, int *cont_erros){
	system("cls");		
	system("color 0F");			
	printf("\n#9. Qual a instru��o correta para ler dois valores inteiros?\n");
	Sleep(1000);
	printf("\n [a. scanf(\"2\%%\d\", &x, &y);  ]");
	printf("\n [b. scanf(\"\%%\d \%%\d\", x, y);  ]");
	printf("\n [c. scanf(\"\%%f \%%f\", &x, &y);]");
	printf("\n [d. scanf(\"\%%\d \%%\d\", &x, &y);]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='d' || resposta =='D'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"d\".");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_erros)++;
		}
	getch();
}
void pergunta10(int *cont_acertos, int *cont_erros){
	system("cls");				
	system("color 0F");			
	printf("\n#10. Qual dos seguintes tipos de dados n�o existe em C?\n");
	Sleep(1000);
	printf("\n [a. int   ]");
	printf("\n [b. float ]");
	printf("\n [c. string]");
	printf("\n [d. char  ]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='c' || resposta =='C'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"c\".");
			printf("\n\nPressione qualquer tecla para AVAN�AR...\n\n");
			(*cont_erros)++;
		}		
	getch();	
}
void placar(int cont_acertos, int cont_erros){
	float porcent_acertos;
	
	system("cls");
	system("color 0F");				
	printf("\nProcessando resultados"); printf(".", Sleep(500)); printf(".", Sleep(500)); printf(".", Sleep(500));
	Sleep(500); system("cls");
	system("cls");
	printf("\n[+] Visualize o seu PLACAR abaixo.");
	printf("\n\nTotal de acertos: [%i]", cont_acertos, Sleep(500));
	printf("\nTotal de erros:   [%i]", cont_erros, Sleep(500));
		
	Sleep(500);
	porcent_acertos = (float)cont_acertos*100/10;
	printf("\n\nVoc� acertou [%.2f%%] das quest�es propostas.", porcent_acertos);	
	printf("\n\nPressione qualquer tecla para RETORNAR ao in�cio...\n\n");	
	getch();system("cls");
	return main();
}
