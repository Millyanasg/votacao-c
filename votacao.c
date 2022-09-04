//* Atividade algoritmo e lógica de programação II
//* Nome: Millyana de Souza Silva
//* Unicesumar - Engenharia de software


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int v=7, Vereador, Prefeito, Menu, V111=0, V222=0, V333=0, N444=0, P11=0, P22=0, N44=0, VI;
	
	
//* Menu
	while(v!=3) {
		
		printf("===========    MENU   =============\n\n");
		printf("1 - Votar.\n");
		printf("2 - Apuração de votos.\n");
		printf("3 - Sair.\n\n");
		printf("Selecione uma opção e aperte ENTER:\n");
		
		scanf("%i,", &Menu);
		fflush(stdin);
		system("cls");
		


//* Menu Eleições	
	
		switch(Menu){                     //*TELA DE VOTAÇÃO
			case 1 :{                     //*VEREADOR / PREFEITO
				printf("  ============================================\n");
				printf("============  ELEIÇÕES DA CIDADE  ==============\n");
				printf("  ============================================\n\n\n");
				printf("==================  VEREADOR  ==================\n\n");
				printf("111 - Vereador João do Frete\n");
				printf("222 - Vereadora Maria da Pamonha\n");
				printf("333 - Vereador Zé da Farmácia\n");
				printf("444 - Voto Nulo\n\n");
				printf("Digite o número para VEREADOR(a) e aperte ENTER:\n");
				scanf("%i,", &Vereador);
				fflush(stdin);
				system("cls");
					

		
				switch(Vereador){
	    			case 111 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("   Você votou em João do Frete.\n\n\n\n\n");
	    				V111=V111+1;
	    				system("pause");
	    				system("cls");
						break;
					}
					case 222 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("  Você votou em Maria da Pamonha.\n\n\n\n\n");
						V222=V222+1;
						system("pause");
						system("cls");
						break;
					}
					case 333 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("   Você votou em Zé da Farmácia.\n\n\n\n\n");
						V333=V333+1;
						system("pause");
						system("cls");							
						break;
					}						
					case 444 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("  	 Você votou NULO.\n\n\n\n\n");
						N444=N444+1;
						system("pause");
						system("cls");							
						break;
		        	}
		        	default: {
		        		VI=VI+1;
		        		printf("============================================\n");
						printf("============  OPÇÃO INVÁLIDA!  =============\n");
						printf("============================================\n\n\n");
		        		system("pause");
		        		system("cls");
						break;							
					}
				}
				
				
				                          //*PREFEITO				
				printf("  ============================================\n");
				printf("============  ELEIÇÕES DA CIDADE  ==============\n");
				printf("  ============================================\n\n\n");
				printf("==================  PREFEITO  ==================\n\n");
				printf("11 - Prefeito Dr. Zureta\n");
				printf("22 - Prefeito Senhor Gomes\n");
				printf("44 - Voto Nulo\n\n");
				printf("Digite o número para PREFEITO e aperte ENTER:\n");
				scanf("%i,", &Prefeito);
				fflush(stdin);
				system("cls");

	
		
				switch(Prefeito){
	    			case 11 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("    Você votou em Dr. Zureta.\n\n\n\n\n");
	    				P11=P11+1;
		        		system("pause");
		        		system("cls");
						break;
					}
						
					case 22 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("    Você votou em Senhor Gomes.\n\n\n\n\n");
						P22=P22+1;
		        		system("pause");
		        		system("cls");							
						break;
					}
	
					case 44 : {
    					printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("  	 Você votou NULO.\n\n\n\n\n");
						N44=N44+1;
		        		system("pause");
		        		system("cls");							
						break;
					}
						
					default:{
						VI=VI+1;
						printf("============================================\n");
						printf("============  OPÇÃO INVÁLIDA!  =============\n");
						printf("============================================\n\n\n");
		        		system("pause");
		        		system("cls");
						break;
					}
				}
//* Tela Final	
				printf("===============================================================================\n");
				printf("===============================================================================\n");
				printf("=====   VOTAÇÃO ENCERRADA   =======================   VOTAÇÃO ENCERRADA   =====\n");
				printf("===============================================================================\n");
				printf("===============================================================================\n");
				printf("============  FIM  =================  FIM  ===============  FIM  ==============\n");
				printf("===============================================================================\n");
				printf("===============================================================================\n");
				printf("=====   VOTAÇÃO ENCERRADA   =======================   VOTAÇÃO ENCERRADA   =====\n");
				printf("===============================================================================\n");
				printf("===============================================================================\n\n\n\n\n");
				system("pause");
				system("cls");						
				break;
		    }
		    
//*Apuração de votos		    
		    
		    case 2 :{
				printf("\n\n\n========  VOTOS PARA VEREADOR  ========\n");
		    	printf("\n");
		    	printf("Vereador Joao do Frete:     %i\n",V111);
		    	printf("Vereadora Maria da Pamonha: %i\n",V222);
		    	printf("Vereador Zé da Farmácia:    %i\n",V333);
		    	printf("Votos nulos para vereador:  %i\n",N444);		    	
		    	printf("\n========  VOTOS PARA PREFEITO  ========\n");
		    	printf("\nPrefeito Dr. Zureta:        %i\n",P11);
		    	printf("Prefeito Senhor Gomes:      %i\n",P22);
		    	printf("Votos nulos para prefeito:  %i\n",N44);
		    	printf("\n=========  VOTOS INVÁLIDOS  ===========\n");
		    	printf("Total de votos invalidados: %i\n\n",VI);		    	
				printf("Pressione qualquer tecla para voltar ao menu principal\n\n\n ");
				system("pause");
				system("cls");
				break;
			}
			
//*Sair

			case 3 :{
				printf("\n\n*********** PROGRAMA DE VOTAÇÃO ENCERRADO ************");
				return 0;
				break;
			}		
		}
    }
		
system("cls");
fflush(stdin);
system("pause");
	
return 0 ;
}
