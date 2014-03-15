#include <stdio.h>

/* directivas de pre-compilador, definicao de constantes, etc. */


/* prototipos: */




/* MAIN */

int main()
{
    char command;  

    /* se for o caso, chamar as funcoes de inicializacao aqui */

    while ((command = getchar()) != 'x') { /* le o comando */
        switch (command) 
        {
        case '+':
            /* Chama a funcao responsavel pela execucao do comando + */
            break;
        case 'm':
            /* Chama a funcao responsavel pela execucao do comando m */
            break;
        case 'e':
            /* Chama a funcao responsavel pela execucao do comando e */
            break;
        default:
            printf("ERRO: Comando desconhecido\n");
        }
        getchar(); /* le o '\n' introduzido pelo utilizador */
    }
    return 0;
}

/* funcoes */

/* (...) */



