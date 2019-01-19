/*******************************************************************************
 * bandeirola.h                                                                *
 * Propósito:                                                                  *
 *                                                                             *
 * @author Jéssica Taís C. Rodrigues                                           *
 * @version 1.0 08/07/2017                                                     *
 ******************************************************************************/
#include <stdlib.h>
#include "bandeirola.h"

int max(int a, int b){
    return (a > b) ? a : b; 
}

int intecepta(bandeirola b1, bandeirola b2){
    if((b1.par < b2.par && b1.impar > b2.impar) || (b1.par > b2.par && b1.impar < b2.impar)){
        return 1;
    }else{
        return 0;
    }
}

int cmpBandeirolaPar(const void* a, const void* b){
    bandeirola *b1, *b2;
    b1 = (bandeirola*)a;
    b2 = (bandeirola*)b;

    return (b1->par - b2->par);
}

void ordenaBandeirolasPar(bandeirola *band, int N){
    qsort(band, N, sizeof(bandeirola), cmpBandeirolaPar);
}