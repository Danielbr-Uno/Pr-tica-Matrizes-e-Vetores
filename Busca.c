#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main(){

    int matriz[LINHA][COLUNA]; //Criando a matriz com a ajuda das condicionais definidas.
    int target = 10; //Criando a variável do alvo(aquilo que vai ser buscado dentro da matriz).
    int found = 0; //Criando a variável que irá agir como booleana.
    int soma = 1; //Criando variável que será responsável pelos números na matriz.

    //Montando a matriz.
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            matriz[i][j] = soma;
            soma++; //Fazendo a sequencia de 1 - x.
            printf(" %3d ", matriz[i][j]); // Organizando a maneira como a matriz vai ser mostrada.
        }
        printf("\n");
    }

    //Busca condicional do elemento alvo.
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(matriz[i][j] == target){
                printf("Elemento %d encontrado no indice (%d, %d) da matriz.\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;  
    } 
    if (!found){
        printf("Elemento %d não encontrado na matriz!\n", target);
    }
    return 0;
}