#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][4];
    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("%d ", matriz[i][j]);
        }
         printf("\n");
    }
    return 0;
}
