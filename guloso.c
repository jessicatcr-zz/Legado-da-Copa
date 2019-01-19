/*******************************************************************************
 * guloso.c                                                                    *
 * Propósito:                                                                  *
 *                                                                             *
 * @author Jéssica Taís C. Rodrigues                                           *
 * @version 1.0 08/07/2017                                                     *
 ******************************************************************************/
#include <stdlib.h>
#include "bandeirola.h"
#include "guloso.h"

int temIntersecoes(int *qtdInter, int N){
    int i;
    for(i = 0; i < N; i++){
        if(qtdInter[i] > 0){
            return 1;
        }
    }
    return 0;
}

int maxIndIntersecao(int *qtdInter, int N){
    int i, maxIndice, maxInter = 0;
    for(i = 0; i < N; i++){
        if(qtdInter[i] > maxInter){
            maxInter = qtdInter[i];
            maxIndice = i;
        }
    }
    return maxIndice;
}

int resolveGuloso(bandeirola *band, int N){
    int **intersecoes, *qtdInter, i, j, inter, indice, resultado = 0;

    qtdInter = malloc(sizeof(int)*N);
    intersecoes = malloc(sizeof(int*)*N);
    for(i = 0; i < N; i++){
        intersecoes[i] = calloc(N, sizeof(int));
    }

    for(i = 0; i < N; i++){
        qtdInter[i] = 0;
        for(j = 0; j < N; j++){
            inter = intecepta(band[i], band[j]);
            intersecoes[i][j] = inter;
            qtdInter[i] += inter;
        }
    }

    while(temIntersecoes(qtdInter, N)){
        indice = maxIndIntersecao(qtdInter, N);
        qtdInter[indice] = -1;
        for(i = 0; i < N; i++){
            if(intersecoes[indice][i] && qtdInter[i] != -1){
                qtdInter[i]--;
            }
        }
    }

    for(i = 0; i < N; i++){
        if(qtdInter[i] == 0){
            resultado++;
        }
    }

    for(i = 0; i < N; i++){
        free(intersecoes[i]);
    }
    free(intersecoes);
    free(qtdInter);

    return resultado;
}