/*******************************************************************************
 * forcaBruta.h                                                                *
 * Propósito:                                                                  *
 *                                                                             *
 * @author Jéssica Taís C. Rodrigues                                           *
 * @version 1.0 08/07/2017                                                     *
 ******************************************************************************/
#ifndef __FORCA_BRUTA_H__
#define __FORCA_BRUTA_H__

/**
 * Resolve o problema pelo algoritmo de força bruta
 *
 * @param  bandeirola*    band    vetor de bandeirolas
 * @param  int            N       quantidade de bandeirolas  
 * @return int                    retorna um inteiro com o máximo de bandeirolas que não se interceptam 
 */
int resolveForcaBruta(bandeirola *band, int N);

#endif