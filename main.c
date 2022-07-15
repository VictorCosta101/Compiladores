#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    int **mat, linha, coluna;
    int tamanho = 100000;

    mat  = malloc(tamanho * sizeof(int*));//Alocação do vetor de ponteiro
    // ele é necessario para que armazene os valores dos demais vetores que irão comport
    // as linhas de cada matriz.

    for( linha = 0; linha < tamanho; linha ++)
    {
        mat[linha] = malloc(tamanho*sizeof(int));

    }// alocacao da memoria para um vetor dinamico

    // Inicializacao da matriz A

//    for(linha = 0 ; linha < tamanho; linha ++)
//    {
//        for(coluna = 0; coluna < tamanho; tamanho ++)
//        {
//            mat[linha][coluna] = 0;
//        }
//    }

    //Inicializacao da Matriz B
//    for(linha = 0 ; linha < tamanho; linha ++)
//    {
//        for(coluna = 0; coluna < tamanho; tamanho ++)
//        {
//            mat[coluna][linha] = 0;
//        }
//    }

    //Inicializacao da Matriz C

//    int *p = &mat[0][0];
//    int t = tamanho * tamanho ;
//    for(linha = 0; linha < t ; linha++){*p++ = 0;}



    //Inicializacao da Matriz D

    bzero((void*) &mat[0][0], (size_t) tamanho*tamanho*sizeof(int));

    for(linha = 0; linha < tamanho; linha++)
    {
        free(mat[linha]);

    }
    free(mat);//liberação da memoria



    return 0;
}
