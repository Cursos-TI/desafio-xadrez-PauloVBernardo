#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível aventureiro - Paulo Vitor dos Santos Bernardo


#include <stdio.h>

int main() {
    //Bispo 5 casas cima e direita usando a função while
    printf("Movimentação do bispo\n");
    int bispo = 0;

    while (bispo < 5) 
    {
        printf("%d para Cima-Direita\n", bispo + 1); //imprime na tela a direção e o número da movimentação
        bispo++;

    }

    printf("\n");

    printf("Movimentação da rainha\n");
    

    //Rainda 8 casas para esquerda

    int rainha = 0;

    do 
    {
        printf("%d para a Direita\n", rainha + 1); //Imprime na tela a direção e o número da movimentação
        rainha++;

    } while (rainha <8);
    
    printf("\n");

    printf("Movimentação da torre\n");

    //Mover a Torre 5 casas para a direita
    for (int torre = 0; torre < 5; torre++) 
    {
        printf("%d para a Direita\n", torre + 1); //Imprime a direção do movimento
    }

    printf("\n");
    printf("Movimentação do cavalo\n");

//Move o cavalo duas casas para baixo e uma para a esquerda


    for (int i = 0; i <=2; i++) { //Primeiro for estabele a condição de se o valor de i for menor ou igual a 2, o código deverá ser executado
        while (i <=1) { //Segundo loop com while estabelece que se o valor de i for menor ou igual a 1, então o código deverá ser executado
            i++;
            printf("%d para Baixo\n", i); //Aqui ocorrerá a impressão segundo as condições do primeiro loop for com o número da casa que está andando
        }
        printf("%d para a Esquerda\n", i-1); //Aqui ocorre a impressão segundo as condições do segundo loop while com o número da casa que está andando

        }


    return 0;
}