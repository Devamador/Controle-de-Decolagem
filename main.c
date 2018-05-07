#include "lista.c"
#include "fila.c"

/** \brief Fun��o principal do sistema
 * \author Paulo Ricardo
 * \return	Return 0 se funcionar corretamente sem interrup�oes.
 *
 * Fun��o principal contendo o menu principal com as funcionalidades requeridas
 */
int main(){
    int op, n;
    Aviao *lista, *fila;

    do{
        system("cls");
        printf("1 - Numero de avi�es a espera de decolar");
        printf("\n2 - Decolagem de um avi�o");
        printf("\n3 - Entrada de um novo avi�o para decolar");
        printf("\n4 - Listar todos os avi�es a espera de decolar");
        printf("\n5 - Listar as caracter�sticas do pr�ximo avi�o a decolar");
        printf("\n0 - Sair\n");
        scanf("%d", &op);

        switch(op){
            case 1:
                /** \TODO chamar metodo contarFilaDecolagem*/
                break;
            case 2:
                system("cls");
                /** \TODO chamar metodo contarFilaDecolagem*/
                break;
            case 3:
                system("cls");
                imprimirLista(lista);
                system("pause");
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("\nOpcaoo invalida\n");
                system("pause");
        }
    }while(op != 0);
    return 0;
}

