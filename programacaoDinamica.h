/*******************************************************************************
 * programacaoDinamica.h                                                       *
 * Propósito:                                                                  *
 *                                                                             *
 * @author Jéssica Taís C. Rodrigues                                           *
 * @version 1.0 08/07/2017                                                     *
 ******************************************************************************/
#ifndef __PROGRAMACAO_DINAMICA_H__
#define __PROGRAMACAO_DINAMICA_H__

/**
 * Resolve o problema pelo algoritmo de programação dinâmica
 *
 * @param  bandeirola*    band    vetor de bandeirolas
 * @param  int            N       quantidade de bandeirolas  
 * @return int                    retorna um inteiro com o máximo de bandeirolas que não se interceptam 
 */
int resolveProgDinamica(bandeirola *band, int N);

#endif