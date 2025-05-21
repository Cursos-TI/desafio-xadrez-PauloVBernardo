#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível mestre - Paulo Vitor dos Santos Bernardo


//Função recursiva do Bispo
void bispo(int n) {
    for (int i = 0; i < n*2; i++) { //Adicionei a condição i < n*2 para que a impressão das palavras baixo e direita aconteça de modo alternado, assim vai duplicar o número de vezes pedido na função
        if (i % 2 == 0) { //quando i for par vai imprimir Baixo
            printf("%d Baixo \n", (i/2) + 1);
        } else {
            printf("%d Direita\n", (i /2) + 1); //quando i for impar vai imprimir Direita
        }
    }
       
}

//Função recursiva da Rainha
void rainha(int n) {
    if (n > 0)  {
        printf("Esquerda\n", n); //Imprime o valor atual de n
        rainha(n -1); //Chama a si mesma com n - 1
    }
    
}

//Função recursiva da Torre
void torre(int n) {
    if (n > 0) {
        printf("Direita\n", n);
        torre(n-1);
    }
}



int main() {
//Move o bispo 5 casas cima e direita usando a função while
    printf("Movimentação do bispo\n");
    
    
    bispo(5);
    

    printf("\n");

    printf("Movimentação da rainha\n");
    

//Mover a rainda 8 casas para esquerda

      int casas_rainha = 8;
      rainha(casas_rainha);

    
    
    printf("\n");

    printf("Movimentação da torre\n");

//Mover a Torre 5 casas para a direita
    int casas_torre = 5;
    torre (casas_torre);

//Move o cavalo duas casas para cima e uma para a direita
    printf("\n");
    printf("Movimentação do cavalo \n");

    for (int i = 0; i <=2; i++) { //Primeiro for estabele a condição de se o valor de i for menor ou igual a 2, o código deverá ser executado
        while (i <=1) { //Segundo loop com while estabelece que se o valor de i for menor ou igual a 1, então o código deverá ser executado
            i++;
            printf("%d para Cima\n", i); //Aqui ocorrerá a impressão segundo as condições do primeiro loop for com o número da casa que está andando
        }
        printf("%d para a Direita\n", i-1); //Aqui ocorre a impressão segundo as condições do segundo loop while com o número da casa que está andando

        }


    return 0;
}