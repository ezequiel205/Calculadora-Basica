#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159265

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a, b, seno, cosseno, tangente, resultado, partes, p, c, t, r, f, valor=1, q;
	float a1, b1, c1, x1, x2, delta;
	float x,y;
	char s, m, opcao, controle, letra, l;
	char k[10];
	char K;
	int codigo_letra;
	int op;
	int val;
	int A;
	int dec = 0;
    int bin = 0;
	*setlocale(LC_ALL,"");
	
	printf("\nBem-Vindo ao Calc!!!\n");//Comando para Comunica��o.
	system("pause"); //Comando Pausa.
	system("cls"); //Comando limpa tela.
	
	welcome:
	printf("\nCalc Vers�o 0.7.4\n");
	printf("\nOp��es:\n\nP - Plano Cartesiano \nB - F�rmula de Bh�skara \nC - Conversor de Bases Num�ricas \nD - Demais C�lculos\nS - Sair do Sistema\n"); //Comando de deci��es.
		scanf("%s", &s);
		
		system("cls"); //comando de limpar a tela.
		
		if (s == 'p' || s =='P'){ //Comando voltar ao menu inicial.
		goto cartesiano;
		}
		
		if (s == 'b' || s =='B'){ //Comando voltar ao menu inicial.
		goto bhaskara;
		}
		
		if (s == 'c' || s =='C'){ //Comando voltar ao menu inicial.
		goto conversoes;
		}
		
		if(s == 'd' || s == 'D'){
		goto recomecar;
		}

		if (s == 's' || s =='S'){ //Comando encerrar o programa.
		goto fim;
		}
		else {
		printf("\nObrigado por utilizar o Calc!!!\n\n"); //Mensagem de Enceramento.
		system("pause"); //Comando Pausa.
		return 0;
   		}
   		
   	cartesiano:{
   		do{
    printf("Este Programa indica o quadrante no plano cartesiano\n");
    printf("Entre com o valor de x:");
    scanf("%f",&x);
    printf("Entre com o valor de y:");
    scanf("%f",&y);
    if((x>0)&&(y>0))
    printf("O Ponto P(%.2f,%.2f) pertence ao primeiro Quadrante\n",x,y);
    else
    {
      if((x<0)&&(y>0))
      printf("O Ponto P(%.2f.%.2f) pertence ao segundo Quadrante\n",x,y);
      else
      {
        if((x<0)&&(y<0))
        printf("O Ponto P(%.2f,%.2f) pertence ao terceiro Quadrante\n",x,y);
        else
        {
          if((x>0)&&(y<0))
          printf("O Ponto P(%.2f,%.2f) pertence ao quarto Quadrante\n",x,y);
          else
          {
            if((x==0)&&((y>0||y<0)))
            printf("O Ponto P(%.2f,%.2f) esta no eixo y\n",x,y);
            else
            {
              if((y==0)&&((x>0||x<0)))
              printf("O Ponto P(%.2f,%.2f) esta no eixo x\n",x,y);
              else
              {
                if((x==0)&&(y==0))
                printf("O Ponto P(%.2f,%.2f) esta na origem\n\n",x,y);
              }//fim do �ltimo else
            }//fim do pen�ltimo else
          }//fim do antepen�ltimo else
        }//fim do terceiro else
      }//fim do segundo else
    }//fim do primeiro else 
    fflush(stdin);
    printf("\nDeseja digitar outro ponto. (S)/(N):\n");
    scanf("%c",&K);
    }while((K=='S')||(K=='s'));
    	printf("\nObrigado por utilizar o Calc!!!\n\n"); //Mensagem de Enceramento.
		system("Pause");
		system("cls"); //Comando limpa tela.
		return 0;
 }//fim do Plano Cartesiano 
  		
   	bhaskara:{ // Descricao: O programa calcula e mostra o resultado de uma equacao do segundo grau.
   	 	printf("\nF�rmula de Bh�skara\n");
		printf("\nDigite o valor do termo a: \n");
 		scanf("%f", &a1);
 		printf("Digite o valor do termo b: \n");
 		scanf("%f", &b1);
 		printf("Digite o valor do termo c: \n");
 		scanf("%f", &c1);
 		
 		// Calcula o valor de x1
 		delta = b1*b1 - 4*a1*c1;
 		x1 = (-b1 + sqrt(delta)) / (2*a1);
 		x2 = (-b1 - sqrt(delta)) / (2*a1);
 
 		// Imprime os resultados
 		if(delta < 0) {
 		printf("A equacao n�o possui raizes reais.\n");
		} else { 
 		printf("\nO valor de x1: %.2f\n", x1);
 		printf("O valor de x2: %.2f\n", x2);
 		}
 		
 		printf("\nOp��es:\n\n B - Continuar utilizando F�rmula de Bh�skara\n Y - Reiniciar o Sistema\n S - Sair do Sistema\n"); //Comando de deci��es.
		{
		scanf("%s", &s); 
		system("cls"); //Comando limpa tela.
		
	
	if (s == 'b' || s =='B'){ //Comando voltar ao menu inicial.
		goto bhaskara;
		}
	
	if (s == 'y' || s =='Y'){ //Comando voltar ao menu inicial.
			goto welcome;
		}
	if (s == 's' || s =='S'){ //Comando encerrar o programa.
			goto fim;
			
		}else{
			printf("\nObrigado por utilizar o Calc!!!\n\n"); //Mensagem de Enceramento.
			system("pause"); //Comando Pausa.
		
   			}
			system("cls"); //Comando limpa tela.
			return 0;
		}
	}
	
	conversoes:{ //Comando para convers�es
	printf("\nDigite um valor em decimal: \n"); 
	scanf("%d",&A); 
 
	itoa(A,k,2); 
 
	printf("\n\n%d decimal em octal: %o\n",A,A); 
	printf("%d decimal em bin�rio: %s\n",A,k); 
	printf("%d decimal em hexadecimal: %x\n\n\n",A,A);
	
	printf("\nOp��es:\n\n C - Continuar com Conversor de Bases Num�ricas\n Y - Reiniciar o Sistema\n S - Sair do Sistema\n"); //Comando de deci��es.
		{
		scanf("%s", &s); 
		system("cls"); //Comando limpa tela.
		
	
	if (s == 'c' || s =='C'){ //Comando voltar ao menu inicial.
			goto conversoes;
		}
	
	if (s == 'y' || s =='Y'){ //Comando voltar ao menu inicial.
			goto welcome;
		}
	if (s == 's' || s =='S'){ //Comando encerrar o programa.
			goto fim;
			
		}else{
			printf("\nObrigado por utilizar o Calc!!!\n\n"); //Mensagem de Enceramento.
			system("pause"); //Comando Pausa.
		
   			}
	system("pause");
	system("cls"); //Comando limpa tela.
	return 0;
		}
	}
	
	recomecar:
	printf("\nCalc Vers�o 0.7.4\n\n");
	printf("Digite o valor de A\n");
	scanf("%f", &a);
	
	continuar:
	if (a==0||a==1){ //Comando para permiss�o do 0 para o calculo.
	}
	else if (a == codigo_letra || a == f){ //Comando para voltar ao menu, caso o usuario insira qualquer outro valor que n�o seja numerico.	
			system("pause"); //Comando Pausa.
			system("cls"); //Comando limpa tela.
			goto fim; //Comando fechamento do programa.
		}
		
	
	printf("\n(+) para somar\n(-) para subtrair\n(*) para multiplicar\n(/) para dividir\n(Q) para Elevado ao quadrado\n(F) para fra��o\n(P) para porcentagem\n(R) para raiz quadrada\n(L) para logaritmo base 10\n(T) para tangente\n(C) para cosseno\n(S) para seno\n\nDigite a opera��o Desejada: \n");
	scanf("%s",&s);

	  switch (s)
	   {

	   	case 'S': //Comando de Seno.
  		    printf("\nO resultado de seno �: %.2f\n\n", resultado, resultado = sin (a*PI/180)); 
   			break;
   		case 's': //Comando de Seno.
  		    printf("\nO resultado de seno �: %.2f\n\n", resultado, resultado = sin (a*PI/180)); 
   			break;
   			
   		case 'C': //Comando de Cosseno.
  			printf("\nO resultado de cosseno �: %.2f\n\n", resultado, resultado = cos (a*PI/180));
			break;
		case 'c': //Comando de Cosseno.
  			printf("\nO resultado de cosseno �: %.2f\n\n", resultado, resultado = cos (a*PI/180));
			break;
			
		case 'T': //Comando de Tangente.
  			printf("\nO resultado da tangente �: %.2f\n\n", resultado, resultado = tan (a*PI/180));	
			break;
		case 't': //Comando de Tangente.
  			printf("\nO resultado da tangente �: %.2f\n\n", resultado, resultado = tan (a*PI/180));	
			break;
			
		case 'R': //Comando de Raiz Quadrada.
			printf ("\nO resultado da raiz quadrada �: %.2f\n\n",resultado, resultado = sqrt(a));
			break;
		case 'r': //Comando de Raiz Quadrada.
			printf ("\nO resultado da raiz quadrada �: %.2f\n\n",resultado, resultado = sqrt(a));
			break;
			
		case 'Q': //Comando de um n�mero elevado ao Quadrado.
			printf("\n %.2f \n", resultado, resultado = a*a);
			break;
		case 'q': //Comando de um n�mero elevado ao Quadrado.
			printf("\n %.2f \n", resultado, resultado = a*a);
			break;
	
		case '+': //Comando de Soma.
			printf("\nDigite o valor de B\n");
			scanf("%f", &b);
			if (b == codigo_letra || b == letra){ //Comando para voltar ao menu, caso o usuario insira qualquer outro valor que n�o seja numerico.
				system("pause"); //Comando Pausa.
				system("cls"); //Comando limpa tela.
				goto fim; //Comando fechamento do programa.
			}
			resultado = a+b;
			printf ("\nO resultado da soma �: %.2f\n\n",resultado);
			break;
			
		case 'F': //Comando de Fra��o.
			printf ("\nDigite a quantidade de partes:\n");
			scanf  ("%f",&partes);
			printf ("\nA fra��o �: %.2f \n\n",resultado, resultado = a/partes);
			break;
		case 'f': //Comando de Fra��o.
			printf ("\nDigite a quantidade de partes:\n");
			scanf  ("%f",&partes);
			printf ("\nA fra��o �: %.2f \n\n",resultado, resultado = a/partes);
			break;
	
		case 'P': //Comando de Porcentagem.
			printf("\nDigite o valor de B\n");
			scanf("%f", &b);
			if (b == codigo_letra || b == letra){ //Comando para voltar ao menu, caso o usuario insira qualquer outro valor que n�o seja numerico.
				system("pause"); //Comando Pausa.
				system("cls"); //Comando limpa tela.
				goto fim; //Comando fechamento do programa.
			}
			printf ("\n O resultado da porcentagem �: %.2f \n\n",resultado, resultado = a*b/100);
			break;
		case 'p': //Comando de Porcentagem.
			printf("\nDigite o valor de B\n");
			scanf("%f", &b);
			if (b == codigo_letra || b == letra){ //Comando para voltar ao menu, caso o usuario insira qualquer outro valor que n�o seja numerico.
				system("pause"); //Comando Pausa.
				system("cls"); //Comando limpa tela.
				goto fim; //Comando fechamento do programa.
			}
			printf ("\n O resultado da porcentagem �: %.2f \n\n",resultado, resultado = a*b/100);
			break;
			
		case '-': //Comando de Subtra��o.
			printf("\nDigite o valor de B\n");
			scanf("%f", &b);
			if (b == codigo_letra || b == letra){ //Comando para voltar ao menu, caso o usuario insira qualquer outro valor que n�o seja numerico.
				system("pause"); //Comando Pausa.
				system("cls"); //Comando limpa tela.
				goto fim; //Comando fechamento do programa.
			}
			printf ("\nO resultado da subtra��o �: %.2f\n\n",resultado, resultado = a-b);
			break;

		case '*': //Comando de Mutiplica��o.
			printf("\nDigite o valor de B\n");
			scanf("%f", &b);
			if (b == codigo_letra || b == letra){ //Comando para voltar ao menu, caso o usuario insira qualquer outro valor que n�o seja numerico.
				system("pause"); //Comando Pausa.
				system("cls"); //Comando limpa tela.
				goto fim; //Comando fechamento do programa.
			}
			printf ("\nO resultado da multiplica��o �: %.2f\n\n",resultado, resultado = a*b);	
			break;

		case '/': //Comando de divis�o.
			printf("\nDigite o valor de B\n");
			scanf("%f", &b);
			if (b == codigo_letra || b == letra){ //Comando para voltar ao menu, caso o usuario insira qualquer outro valor que n�o seja numerico.
				system("pause"); //Comando Pausa.
				system("cls"); //Comando limpa tela.
				goto fim; //Comando fechamento do programa.
			}	
			if (b == 0)//Comando n�o � possivel divis�o por 0.
            printf("\nOpera��o inv�lida, nao � poss�vel dividir por zero!!\n");
         	else
            printf ("\nO resultado da divis�o �: %.2f\n\n",resultado, resultado = a/b);
			break;
			
		case 'L':	//Comando base de log10.
			printf ("\nO resultado do logaritmo base 10 �: %.2f\n\n",resultado, resultado = log10(a)); 
			break;
		case 'l':	//Comando base de log10.
			printf ("\nO resultado do logaritmo base 10 �: %.2f\n\n",resultado, resultado = log10(a)); 
			break;

		default://Comando de Reiniciar o sistema.
			printf("\nOpera��o n�o encontrada... Reiniciando Sistema...\n\n");
			system("pause"); //Comando Pausa.
			system("cls");
			goto recomecar;
		}
		
		printf("\nOp��es:\n\n C - Continuar Calculando\n R - Recome�ar C�lculos\n Y - Reiniciar o Sistema\n S - Sair do Sistema\n"); //Comando de deci��es.
		{
		
		scanf("%s", &s);
		
		system("cls"); //comando de limpar a tela.
		
		if(s == 'c' || s == 'C'){
			a = resultado;
			system("cls"); //comando de limpar a tela.
			printf ("\nO valor de A �: %.2f\n\n",a);
			goto continuar;
		}
		
		if (s == 'r' || s =='R'){ //Comando voltar ao menu inicial.
			goto recomecar;
		}
		
		if (s == 'y' || s =='Y'){ //Comando voltar ao menu inicial.
			goto welcome;
		}

		if (s == 's' || s =='S'){ //Comando encerrar o programa.
			goto fim;
			
		}else{
			fim:
			printf("\nObrigado por utilizar o Calc!!!\n\n"); //Mensagem de Enceramento.
			system("pause"); //Comando Pausa.
		
   			}
			return 0;
		}
	}



