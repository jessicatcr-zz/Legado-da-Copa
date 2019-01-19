/*******************************************************************************
 * bandeirola.h                                                                *
 * Propósito:                                                                  *
 *                                                                             *
 * @author Jéssica Taís C. Rodrigues                                           *
 * @version 1.0 08/07/2017                                                     *
 ******************************************************************************/
#ifndef __BANDEIROLA_H__
#define __BANDEIROLA_H__

typedef struct bandeirola{
    int par;
    int impar;
} bandeirola;


/**
 * Retorna quem é o maior entre dois inteiros
 *
 * @param  int      a    inteiro
 * @param  int      b    inteiro
 * @return int           retorna o maior entre a e b
 */
int max(int a, int b);

/**
 * Verifica se há interseção entre duas bandeirolas
 *
 * @param  bandeirola    b1    bandeirola
 * @param  bandeirola    b2    bandeirola
 * @return int                 retorna 1 se tem interseção ou 0 caso contrário
 */
int intecepta(bandeirola b1, bandeirola b2);

/**
 * Ordena de forma crescente as bandeirolas pelo lado par
 *
 * @param  bandeirola*    band    vetor de bandeirolas
 * @param  int            N       quantidade de bandeirolas  
 * @return void 
 */
void ordenaBandeirolasPar(bandeirola *band, int N);

#endif