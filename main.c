/*******************************************************************************
 * main.c                                                                      *
 * Propósito:                                                                  *
 *                                                                             *
 * @author Jéssica Taís C. Rodrigues                                           *
 * @version 1.0 08/07/2017                                                     *
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "bandeirola.h"
#include "guloso.h"
#include "programacaoDinamica.h"
#include "forcaBruta.h"


int main(void){
    char alg;
    int N, i, bar, casa, qtdBandeirolas;
    bandeirola *band;

    scanf("%c", &alg);
    scanf("%d", &N);
    band = malloc(sizeof(bandeirola)*N);

    for(i = 0; i < N; i++){
        scanf("%d%d", &bar, &casa);
        if (bar % 2 == 0){
            band[i].par = bar;
            band[i].impar = casa;
        }else{
            band[i].par = casa;
            band[i].impar = bar;
        }
    }

    switch (alg){
        case 'g':
            qtdBandeirolas = resolveGuloso(band, N);
            break;
         case 'd':
             qtdBandeirolas = resolveProgDinamica(band, N);
             break;
         case 'b':
            qtdBandeirolas = resolveForcaBruta(band, N);
            break;
    }

    printf("%d\n", qtdBandeirolas);
    free(band);

    return 0;
}