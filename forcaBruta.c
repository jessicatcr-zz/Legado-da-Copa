/*******************************************************************************
 * forcaBruta.c                                                                *
 * Propósito:                                                                  *
 *                                                                             *
 * @author Jéssica Taís C. Rodrigues                                           *
 * @version 1.0 08/07/2017                                                     *
 ******************************************************************************/
#include <stdlib.h>
#include "bandeirola.h"
#include "forcaBruta.h"

int forcaBruta(bandeirola *band, int *estaNaSolucao, int bandeirolaAtual, int N){
    int i, j, cont = 0;
    if(bandeirolaAtual == N){ 
        for(i = 0; i < N; i++){
            if(estaNaSolucao[i]){
                for (j = 0; j < N; j++){
                    if (estaNaSolucao[j] && intecepta(band[i], band[j])){
                        return 0;
                    }
                }
                cont++;
            }
        }
        return cont;
    }else{
        int result1, result2;
        estaNaSolucao[bandeirolaAtual] = 0;
        result1 = forcaBruta(band, estaNaSolucao, bandeirolaAtual+1, N);
        estaNaSolucao[bandeirolaAtual] = 1;    
        result2 = forcaBruta(band, estaNaSolucao, bandeirolaAtual+1, N);
        return max(result1, result2);
    }
}

int resolveForcaBruta(bandeirola *band, int N){
    int *estaNaSolucao, fb;

    estaNaSolucao = malloc(sizeof(int)*N);
    fb = forcaBruta(band, estaNaSolucao, 0, N);
    free(estaNaSolucao);

    return fb;
}