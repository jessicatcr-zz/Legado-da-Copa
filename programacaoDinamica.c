/*******************************************************************************
 * programacaoDinamica.c                                                       *
 * Propósito:                                                                  *
 *                                                                             *
 * @author Jéssica Taís C. Rodrigues                                           *
 * @version 1.0 08/07/2017                                                     *
 ******************************************************************************/
#include <stdlib.h>
#include "bandeirola.h"
#include "programacaoDinamica.h"

int resolveProgDinamica(bandeirola *band, int N){
    int *vetOPT, i, j, max, resultado = 1;
    vetOPT = malloc(sizeof(int)*N);
    ordenaBandeirolasPar(band, N);
    
    for(i = 0; i < N; i++){
        max = 1;
        for(j = 0; j < i; j++){
            if (band[j].impar < band[i].impar && (vetOPT[j]+1) > max){
                max = vetOPT[j]+1;
            }
        }
        vetOPT[i] = max;
        if(resultado < max){
            resultado = max;
        }
    }

    free(vetOPT);

    return resultado;
}