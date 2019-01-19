/*******************************************************************************
 * guloso.h                                                                    *
 * Propósito:                                                                  *
 *                                                                             *
 * @author Jéssica Taís C. Rodrigues                                           *
 * @version 1.0 08/07/2017                                                     *
 ******************************************************************************/
#ifndef __GULOSO_H__
#define __GULOSO_H__

/**
 * Resolve o problema pelo algoritmo guloso
 *
 * @param  bandeirola*    band    vetor de bandeirolas
 * @param  int            N       quantidade de bandeirolas  
 * @return int                    retorna um inteiro com o máximo de bandeirolas que não se interceptam 
 */
int resolveGuloso(bandeirola *band, int N);

#endif