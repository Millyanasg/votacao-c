//* Atividade algoritmo e l�gica de programa��o II
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
		printf("2 - Apura��o de votos.\n");
		printf("3 - Sair.\n\n");
		printf("Selecione uma op��o e aperte ENTER:\n");
		
		scanf("%i,", &Menu);
		fflush(stdin);
		system("cls");
		


//* Menu Elei��es	
	
		switch(Menu){                     //*TELA DE VOTA��O
			case 1 :{                     //*VEREADOR / PREFEITO
				printf("  ============================================\n");
				printf("============  ELEI��ES DA CIDADE  ==============\n");
				printf("  ============================================\n\n\n");
				printf("==================  VEREADOR  ==================\n\n");
				printf("111 - Vereador Jo�o do Frete\n");
				printf("222 - Vereadora Maria da Pamonha\n");
				printf("333 - Vereador Z� da Farm�cia\n");
				printf("444 - Voto Nulo\n\n");
				printf("Digite o n�mero para VEREADOR(a) e aperte ENTER:\n");
				scanf("%i,", &Vereador);
				fflush(stdin);
				system("cls");
					

		
				switch(Vereador){
	    			case 111 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("   Voc� votou em Jo�o do Frete.\n\n\n\n\n");
	    				V111=V111+1;
	    				system("pause");
	    				system("cls");
						break;
					}
					case 222 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("  Voc� votou em Maria da Pamonha.\n\n\n\n\n");
						V222=V222+1;
						system("pause");
						system("cls");
						break;
					}
					case 333 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("   Voc� votou em Z� da Farm�cia.\n\n\n\n\n");
						V333=V333+1;
						system("pause");
						system("cls");							
						break;
					}						
					case 444 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("  	 Voc� votou NULO.\n\n\n\n\n");
						N444=N444+1;
						system("pause");
						system("cls");							
						break;
		        	}
		        	default: {
		        		VI=VI+1;
		        		printf("============================================\n");
						printf("============  OP��O INV�LIDA!  =============\n");
						printf("============================================\n\n\n");
		        		system("pause");
		        		system("cls");
						break;							
					}
				}
				
				
				                          //*PREFEITO				
				printf("  ============================================\n");
				printf("============  ELEI��ES DA CIDADE  ==============\n");
				printf("  ============================================\n\n\n");
				printf("==================  PREFEITO  ==================\n\n");
				printf("11 - Prefeito Dr. Zureta\n");
				printf("22 - Prefeito Senhor Gomes\n");
				printf("44 - Voto Nulo\n\n");
				printf("Digite o n�mero para PREFEITO e aperte ENTER:\n");
				scanf("%i,", &Prefeito);
				fflush(stdin);
				system("cls");

	
		
				switch(Prefeito){
	    			case 11 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("    Voc� votou em Dr. Zureta.\n\n\n\n\n");
	    				P11=P11+1;
		        		system("pause");
		        		system("cls");
						break;
					}
						
					case 22 : {
	    				printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("    Voc� votou em Senhor Gomes.\n\n\n\n\n");
						P22=P22+1;
		        		system("pause");
		        		system("cls");							
						break;
					}
	
					case 44 : {
    					printf("\n\n    **** VOTO CONFIRMADO ****\n\n");
						printf("  	 Voc� votou NULO.\n\n\n\n\n");
						N44=N44+1;
		        		system("pause");
		        		system("cls");							
						break;
					}
						
					default:{
						VI=VI+1;
						printf("============================================\n");
						printf("============  OP��O INV�LIDA!  =============\n");
						printf("============================================\n\n\n");
		        		system("pause");
		        		system("cls");
						break;
					}
				}
//* Tela Final	
				printf("===============================================================================\n");
				printf("===============================================================================\n");
				printf("=====   VOTA��O ENCERRADA   =======================   VOTA��O ENCERRADA   =====\n");
				printf("===============================================================================\n");
				printf("===============================================================================\n");
				printf("============  FIM  =================  FIM  ===============  FIM  ==============\n");
				printf("===============================================================================\n");
				printf("===============================================================================\n");
				printf("=====   VOTA��O ENCERRADA   =======================   VOTA��O ENCERRADA   =====\n");
				printf("===============================================================================\n");
				printf("===============================================================================\n\n\n\n\n");
				system("pause");
				system("cls");						
				break;
		    }
		    
//*Apura��o de votos		    
		    
		    case 2 :{
				printf("\n\n\n========  VOTOS PARA VEREADOR  ========\n");
		    	printf("\n");
		    	printf("Vereador Joao do Frete:     %i\n",V111);
		    	printf("Vereadora Maria da Pamonha: %i\n",V222);
		    	printf("Vereador Z� da Farm�cia:    %i\n",V333);
		    	printf("Votos nulos para vereador:  %i\n",N444);		    	
		    	printf("\n========  VOTOS PARA PREFEITO  ========\n");
		    	printf("\nPrefeito Dr. Zureta:        %i\n",P11);
		    	printf("Prefeito Senhor Gomes:      %i\n",P22);
		    	printf("Votos nulos para prefeito:  %i\n",N44);
		    	printf("\n=========  VOTOS INV�LIDOS  ===========\n");
		    	printf("Total de votos invalidados: %i\n\n",VI);		    	
				printf("Pressione qualquer tecla para voltar ao menu principal\n\n\n ");
				system("pause");
				system("cls");
				break;
			}
			
//*Sair

			case 3 :{
				printf("\n\n*********** PROGRAMA DE VOTA��O ENCERRADO ************");
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
