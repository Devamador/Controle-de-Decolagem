/** \brief Defini��o da biblioteca com fun��es referentes � Fila de decolagem
 *  \author Paulo Ricardo
 *
 * Defini��o dos cabe�alhos da fun��es e descri��o dos resp�nsaveis por implementar cada fun��o.
 */
#ifndef TIPO_AVIAO
#define TIPO_AVIAO

#include <stdio.h>
#include <stdlib.h>

typedef struct aviao{
    int codigo;
    char capit�o[20];
    char destino[20];
    struct aviao *prox;
}Aviao;
#endif // TIPO_AVIAO

#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

Aviao* inserirNaFilaDecolagem(Aviao **inicio, Aviao **fim, Aviao aviao);/** \Responsavel: */
Aviao* Decolar(Aviao **inicio);/** \Responsavel: */
void ListarFilaDeDecolagem(Aviao **inicio, Aviao **fim);/** \Responsavel: */
void ListarProximoADecolar(Aviao **inicio, Aviao **fim);/** \Responsavel: */
int qtdAvioesNaFila(Aviao **inicio, Aviao **fim);/** \Responsavel: */
#endif // FILA_H_INCLUDED

