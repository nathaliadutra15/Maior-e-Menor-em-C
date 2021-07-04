//****************************************************//
//*            PROGRAMA: NumeroMaiorouMenor          *//
//       Exibe o maior e menor numero de uma lista   //
//                  digitada pelo usuario            //
//*                    Data 12/06/2019              *//
//*                      VERS�O: 1.0                *//
//*        MODIFICA��O Data 12/06/2019              *//
//***************************************************//

#include <stdio.h> //Declara biblioteca de entrada e sa�da
#include <stdlib.h> //Declara biblioteca de identifica��o de caracteres calculo

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int numeros[10]; // Declara��o de Variaveis (Todas do tipo Inteiro)
    int i;
    int j;
    int troca;
    

    for(i=0;i<10;i++) // Para i iniciado em 0, enquanto a variavel for menor que 10, i r� somar mais um
    {
	    printf("Digite um numero:"); //Exibe na tela a frase
	    scanf("%d", &numeros[i]); //Leitura do valor digitado e guardado no vetor
    }
    

    for(i=0;i<9;i++) // Para i iniciado em 0, enquanto a variavel for menor que 9, i r� somar mais um
    {
        for(j=i+1;j<10;j++) // Para j iniciado em i+1, enquanto a variavel for menor que 10, j ir� somar mais um
        {
            if(numeros[i]>numeros[j]) // Se o numero na posi��o i for maior que o numero na posi��o j
            {
                troca=numeros[i]; // A variavel "troca" ir� receber o numero na posi��o i
                numeros[i]=numeros[j]; // A variavel "numero na posi��o i" ir� receber o numero na posi��o j
                numeros[j]=troca; // A variavel "numero na posi��o j" ir� receber a variavel troca
            }
        }
    }
    
    printf("O maior numero desta lista e:%d\n", numeros[i]); //Exibe na tela o maior numero
    printf("O menor numero desta lista e:%d\n", numeros[0]); //Exibe na tela o menor numero
    
    system("pause"); //Pausa logo ap�s a sua execu��o
    
	return 0; // Retorna o valor esperado pela fun��o main
}

//****************************************************//
//*     PROGRAMADOR: Nath�lia Dutra de Oliveira      *//
//*     TELEFONE: +55 11 9 5658 1503                 *//
//****************************************************//
