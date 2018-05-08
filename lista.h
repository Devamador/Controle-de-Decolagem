/** \brief Defini��o da biblioteca com fun��es referentes � lista
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
    char capitao[20];
    char destino[20];
    struct aviao *prox;
}Aviao;
#endif // TIPO_AVIAO

#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

Aviao* criarAviao(); /** \Responsavel: */
Aviao* insereAviaoLista(Aviao **lista);/** \Responsavel: */
Aviao* buscarAviao(Aviao *lista);/** \Responsavel: */
#endif // LISTA_H_INCLUDED
