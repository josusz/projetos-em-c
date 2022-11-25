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
	
	printf("\n[QUIZ]Teste os seus conhecimentos sobre Lógica de Programação com este mini-game de perguntas e respostas. \\o/", Sleep(500));	
	printf("\n\nPressione qualquer tecla para visualizar o MENU de opções...\n\n", Sleep(600)); getch();			
			
	printf(  " [1. Instruções]", Sleep(500));
	printf("\n [2. Jogar     ]", Sleep(500));
	printf("\n [3. Gabarito  ]\n\n", Sleep(500));
	
	opcao_selecionada=getch();
	switch(opcao_selecionada){
		case '1':
			system("cls");
			printf("\nNo total são 10 perguntas objetivas com alternativas de A até D, escolha uma delas e pressione ENTER.");
			printf("\nApós o fim de todas as perguntas, será exibido o seu placar.", Sleep(500));
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
				printf("\nVocê pode observar abaixo as alternativas das RESPOSTAS para as atuais perguntas que foram propostas neste mini-game."); Sleep(600);
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
			printf("[!] Escolha uma opção VÁLIDA!\n\n");
			Sleep(950);
			system("cls");
		return main();
	}
}

char resposta;

void pergunta1(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");
	printf("\n#1. Onde as variáveis ficam armazenadas?\n");
	Sleep(1000);
	printf("\n [a. No programa/software.                           ]");
	printf("\n [b. Na memória RAM do computador.                   ]");
	printf("\n [c. No banco de dados.                              ]");
	printf("\n [d. No banco de dados, no software e na memória RAM.]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='b' || resposta =='B'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");	
			(*cont_acertos)++;
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"b\".");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
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
	printf("\n [b. Configurar o tipo de uma variável.                                ]");
	printf("\n [c. Dividir duas variáveis.                                           ]");
	printf("\n [d. Unir dados de modo lógico ou manter ligação ou conexão entre eles.]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='d' || resposta =='D'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"d\".");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_erros)++;
		}
	getch();
}
void pergunta3(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");	
	printf("\n#3. O que são arrays?\n");
	Sleep(1000);
	printf("\n [a. São estruturas de dados homogêneas que possibilitam o armazenamento de grupos de valores do mesmo tipo em uma única variável.                     ]");
	printf("\n [b. São variáveis específicas para armazenamento de números inteiros.                                                                                 ]");
	printf("\n [c. Trata-se de uma forma de planejamento do algoritmo.                                                                                               ]");
	printf("\n [d. São formas de estruturar ou organizar dados na memória RAM do computador, de modo que você possa utilizar estes dados de uma forma mais eficiente.]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='a' || resposta =='A'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"a\".");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");	
			(*cont_erros)++;
		}
	getch();
}
void pergunta4(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");
	printf("\n#4. Marque a opção correta que define a estrutura de repetição 'PARA - ATÉ' (Em inglês, \"FOR\"):\n");
	Sleep(1000);
	printf("\n [a. Caso o resultado seja falso o programa encerra essa estrutura e volta para o fluxo do programa.                                                                                      ]");
	printf("\n [b. Estrutura de repetição que realiza um teste lógico no final da estrutura, executando ao menos uma vez o conjunto de intruções antes de verificar a condição testada.                 ]");
	printf("\n [c. Estrutura de repetição utilizada quando já existe um término determinado ou limites fixos.                                                                                           ]");
	printf("\n [d. Estrutura de repetição que realiza um teste lógico no início da estrutura e sempre que o teste lógico resultar em VERDADEIRO, os comandos associados a esta estrutura são executados.]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='c' || resposta =='C'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"c\".");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");	
			(*cont_erros)++;
		}
	getch();
}
void pergunta5(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");
	printf("\n#5. Marque a opção que melhor define o conceito de LÓGICA na área da tecnologia:\n");
	Sleep(1000);
	printf("\n [a. Organização e planejamento das instruções em um algoritmo, a fim de viabilizar a implantação de um programa/software.]");
	printf("\n [b. O encadeamento coerente de alguma coisa que obedece a certas convenções e regras.                                    ]");
	printf("\n [c. Significa encadear uma série de instruções para que se possa chegar à solução de um problema.                        ]");
	printf("\n [d. Maneira rigorosa de raciocinar.                                                                                      ]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='a' || resposta =='A'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"a\".");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_erros)++;	
		}
	getch();
}
void pergunta6(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");
	printf("\n#6. O que é um algoritmo?\n");
	Sleep(1000);
	printf("\n [a. São ações ditas ao computador para ele executar.                                                                                                                             ]");
	printf("\n [b. É a solução de um problema.                                                                                                                                                  ]");
	printf("\n [c. Trata-se de uma sequência de passos, conhecida como um conjunto de instruções para se chegar a um determinado objetivo.                                                      ]");
	printf("\n [d. Permite realizar operações lógicas e aritméticas utilizando apenas dois dígitos ou dois estados (sim ou não, verdadeiro ou falso, tudo ou nada, ligado ou desligado, 1 ou 0).]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='c' || resposta =='C'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"c\".");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_erros)++;	
		}
	getch();
}
void pergunta7(int *cont_acertos, int *cont_erros){
	system("cls");			
	system("color 0F");
	printf("\n#7. Qual a diferença entre a função scanf e a função gets na leitura de strings na linguagem C?\n");
	Sleep(1000);
	printf("\n [a. A função gets não existe.                               ]");
	printf("\n [b. scanf lê strings completas e gets lê apenas uma palavra.]");
	printf("\n [c. gets lê strings completas e scanf lê apenas uma palavra.]");
	printf("\n [d. A função scanf não lê strings.                          ]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='c' || resposta =='C'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"c\".");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_erros)++;	
		}	
	getch();
}
void pergunta8(int *cont_acertos, int *cont_erros){
	system("cls");
	system("color 0F");	
	printf("\n#8. Em linguagem C, qual a diferença entre = e ==?\n");
	Sleep(1000);
	printf("\n [a. = é o operador de igualdade e == é o operador diferente.   ]");
	printf("\n [b. = é o operador de igualdade e == é o símbolo de atribuição.]");
	printf("\n [c. == é o operador de igualdade e = é o símbolo de atribuição.]");
	printf("\n [d. Não existe diferença.                                      ]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='c' || resposta =='C'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"c\".");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_erros)++;
		}
	getch();	
}
void pergunta9(int *cont_acertos, int *cont_erros){
	system("cls");		
	system("color 0F");			
	printf("\n#9. Qual a instrução correta para ler dois valores inteiros?\n");
	Sleep(1000);
	printf("\n [a. scanf(\"2\%%\d\", &x, &y);  ]");
	printf("\n [b. scanf(\"\%%\d \%%\d\", x, y);  ]");
	printf("\n [c. scanf(\"\%%f \%%f\", &x, &y);]");
	printf("\n [d. scanf(\"\%%\d \%%\d\", &x, &y);]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='d' || resposta =='D'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"d\".");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_erros)++;
		}
	getch();
}
void pergunta10(int *cont_acertos, int *cont_erros){
	system("cls");				
	system("color 0F");			
	printf("\n#10. Qual dos seguintes tipos de dados não existe em C?\n");
	Sleep(1000);
	printf("\n [a. int   ]");
	printf("\n [b. float ]");
	printf("\n [c. string]");
	printf("\n [d. char  ]");
	printf("\n\nRESPOSTA: ");
	scanf("%s", &resposta);
		if(resposta=='c' || resposta =='C'){
			printf("Correta! :D");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
			(*cont_acertos)++;	
		}
		else{
			system("color 4F");
			printf("Incorreta! :P");
			printf("\n\n*Alternativa correta: \"c\".");
			printf("\n\nPressione qualquer tecla para AVANÇAR...\n\n");
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
	printf("\n\nVocê acertou [%.2f%%] das questões propostas.", porcent_acertos);	
	printf("\n\nPressione qualquer tecla para RETORNAR ao início...\n\n");	
	getch();system("cls");
	return main();
}
