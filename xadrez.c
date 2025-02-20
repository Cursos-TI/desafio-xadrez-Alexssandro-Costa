#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int movimento;
    do
    {
        puts("Deseja mover a peça em quantas casas:"); 
        scanf(" %i", &movimento); // determina quantas casas a peça irá se mover

        if(movimento <= 0)
        {
            puts("Digite um numero positivo maior que 1\n");
        }

    }while(movimento <= 0);
    
    // Implementação de Movimentação do Bispo
    for(int b = 1; b <= movimento; b++)
    {
        printf("Bispo se movimentou %i casas em direção a Diagonal superior direita\n", b);
    }

    // Implementação de Movimentação da Torre
    for(int t = 1; t <= movimento; t++)
    {
        printf("Torre se movimentou %i casas pra direita\n", t);
    }

    // Implementação de Movimentação da Rainha
    for(int r = 1; r <= movimento; r++)
    {
        printf("Torre se movimentou %i casas pra esquerda\n", r);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
