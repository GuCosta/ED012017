/* Programa que recebe dimensoes M e N quaisquer e constroi uma matriz de numeros aleatorios */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i, j;
    int m, n;
    int *v1, *v2;

    /* requisita valor do usuario para a dimensao da matriz */
    do{
        printf("Digite o numero de linhas da matriz:");
        scanf("%d", &m);
    }while(m < 0);

    do{
        printf("Digite o numero de colunas da matriz:");
        scanf("%d", &n);
    }while(n < 0);

    /* alocacao dinamica */
    v1 = (int*) malloc(m*sizeof(int));
    v2 = (int*) malloc(n*sizeof(int));

    if((v1 == NULL) && (v2 == NULL)) {
        printf("Memoria insuficiente.\n");
        return 1;
    }

    srand(time(NULL));

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", rand() % 10);
        }
        printf("\n");
    }
    return 0;
}
