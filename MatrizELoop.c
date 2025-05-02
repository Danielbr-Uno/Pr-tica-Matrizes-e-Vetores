#include <stdio.h>

//Pré definidas tamanho de linhas e colunas, para facilitar manutenção nos códigos.
#define LINHAS 5
#define COLUNAS 5

int main(){

    int matriz[LINHAS][COLUNAS];
    int soma;

    for(int i = 0; i < LINHAS; i++)
    {
        for(int j = 0; j < COLUNAS; j++)
        {
            soma++;
            printf(" %d ", matriz[LINHAS][COLUNAS] = soma);
        }
        printf("\n");
    }

    return 0;
}