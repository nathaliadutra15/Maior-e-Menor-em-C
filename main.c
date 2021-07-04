//****************************************************//
//*            PROGRAMA: NumeroMaiorouMenor          *//
//       Exibe o maior e menor numero de uma lista   //
//                  digitada pelo usuario            //
//*                    Data 12/06/2019              *//
//*                      VERSÃO: 1.0                *//
//*        MODIFICAÇÃO Data 12/06/2019              *//
//***************************************************//

#include <stdio.h> //Declara biblioteca de entrada e saída
#include <stdlib.h> //Declara biblioteca de identificação de caracteres calculo

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int numeros[10]; // Declaração de Variaveis (Todas do tipo Inteiro)
    int i;
    int j;
    int troca;
    

    for(i=0;i<10;i++) // Para i iniciado em 0, enquanto a variavel for menor que 10, i rá somar mais um
    {
	    printf("Digite um numero:"); //Exibe na tela a frase
	    scanf("%d", &numeros[i]); //Leitura do valor digitado e guardado no vetor
    }
    

    for(i=0;i<9;i++) // Para i iniciado em 0, enquanto a variavel for menor que 9, i rá somar mais um
    {
        for(j=i+1;j<10;j++) // Para j iniciado em i+1, enquanto a variavel for menor que 10, j irá somar mais um
        {
            if(numeros[i]>numeros[j]) // Se o numero na posição i for maior que o numero na posição j
            {
                troca=numeros[i]; // A variavel "troca" irá receber o numero na posição i
                numeros[i]=numeros[j]; // A variavel "numero na posição i" irá receber o numero na posição j
                numeros[j]=troca; // A variavel "numero na posição j" irá receber a variavel troca
            }
        }
    }
    
    printf("O maior numero desta lista e:%d\n", numeros[i]); //Exibe na tela o maior numero
    printf("O menor numero desta lista e:%d\n", numeros[0]); //Exibe na tela o menor numero
    
    system("pause"); //Pausa logo após a sua execução
    
	return 0; // Retorna o valor esperado pela função main
}

//****************************************************//
//*     PROGRAMADOR: Nathália Dutra de Oliveira      *//
//*     TELEFONE: +55 11 9 5658 1503                 *//
//****************************************************//
