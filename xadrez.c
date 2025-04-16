#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Paulo Vitor dos Santos Bernardo

int main() {

    //Movimentação do Bispo em cinco casas na diagonal (cima e direita) usando a função while
    int bispo = 0;

    while (bispo < 5) //condição especifica que se execute o código até que o valor da variável bispo seja 4
    {
        printf("%d Cima-Direita\n", bispo + 1); //imprime na tela a direção e o número da movimentação
        bispo++;

    }

    printf("\n");
    

    //Movimentação da Rainha em oito casas para esquerda usando a função do-while

    int rainha = 0;

    do 
    {
        printf("%d Direita\n", rainha + 1); //imprime na tela a direção e o número da movimentação
        rainha++;

    } while (rainha <8); //condição é de parar de executar o código quando o valor da variável rainha for 7
    
    printf("\n");

    //Movimentação da Torre em cinco casas para a direita usando a função for

    for (int torre = 0; torre < 5; torre++) //condição especifica que se execute o código pelo número de vezes em que o valor da variável torre somada a uma unidade for menor que cinco
    {
        printf("%d Direita\n", torre + 1); //Imprime a direção do movimento
    }


    return 0;
}
