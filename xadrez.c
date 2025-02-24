#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// Implementação de Movimentação do Bispo
void movimentacao_bispo(int casas)
{
    if(casas > 0)
    {
        for (int i = 0; i < 1; i++)
        { 
            puts("Cima");
            for(int j = 0; j < 1 ; j++)
            {
                puts("direita");
            } 
        }
        movimentacao_bispo(casas-1); // chamada a recursão
        
    }

}

// Implementação de Movimentação da Torre
void movimentacao_torre(int casas)
{
    if(casas > 0)
    {
        movimentacao_torre(casas-1); // chamada a recursão
        puts("direita");
    }
}

 // Implementação de Movimentação da Rainha
void movimentacao_rainha(int casas)
{
    if(casas > 0)
    {
        movimentacao_rainha(casas-1); // chamada a recursão
        puts("Esquerda");
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int movimento = 0;   // variavel que contem quantas casas que as peças irão se mover
    char validacao;
    do
    {
        puts("Deseja mover as peça em quantas casas?\n escolha de 1 a 9:"); 
        scanf(" %s", &validacao); // determina quantas casas a peça irá se mover

        // verifica se oque foi inserido é um digito 
        if(isdigit(validacao))
        {
            if((validacao - '0') < 10 )
            {
                movimento =  validacao - '0';
                break;
            }
        }
        puts("Digite um numero inteiro de 1 a 9\n");
    
    }while(movimento <= 0 || movimento > 10);
    
    // chamada do procedimento de movimentação do bispo
    puts("Movimentação do Bispo");
    movimentacao_bispo(movimento);

    // chamada do procedimento de movimentação da Torre
    puts("\nMovimentação da Torre");
    movimentacao_torre(movimento);

    // chamada do procedimento de movimentação da Rainha
    puts("\nMovimentação da Rainha");
    movimentacao_rainha(movimento);

    // implementação da movimentação do cavalo
    puts("\nMovimentação do Cavalo");
    int aux = 1;  
    while(aux <= movimento)
    {
        printf("\n%i° movimento\n", aux);
        // declara duas variaveis
        for(int i = 0, j = 1; i <= 2; i++)
        {
            // verifica se i é maior que j, se for, mostra a string e sai do loop
            if(i > j)
            {
                puts("direita");
                break;
            }
            puts("cima"); // mostra essa string se i não for maior que j
        }
        aux ++;
    }

    return 0;
}
