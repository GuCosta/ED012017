/* Programa para calcular o desvio padrao de n valores uma populacao  */

#include <stdio.h>
#include <math.h>

/* Funcao para calculo da media dos valores da populacao */
float media(int n, float *v){
    int i;
    float s = 0.0;

    for(i = 0; i < n; i++){
        s = s + v[i];
    }
    return s/n;
}

/* Funcao para calculo da variancia */
float variancia(int n, float *v, float m){
    int i;
    float s = 0.0;

    for(i = 0; i < n; i++){
        s = s + (v[i] - m) * (v[i] - m);
    }
    return s/n;
}

/* Funcao para calculo do desvio padrao */
float desvio_padrao(float var){
    float desv_pad;

    desv_pad = (float) sqrt(var);
    return desv_pad;
}

int main(void){
    float *v;
    float med, var, dp;
    int i, n;

    /* leitura do numero de valores de populacao */
    printf("Digite o numero de valores de populacao: ");
    scanf("%d", &n);

    /* alocacao dinamica */
    v = (float*)malloc(n*sizeof(float));

    if(v == NULL){
        printf("Memoria insuficiente.\n");
        return 1;
    }

    /* leitura dos valores */
    for(i = 0; i < n; i++){
        printf("Digite o valor da populacao %d: ", i + 1);
        scanf("%f", &v[i]);
    }
    med = media(n, v);
    var = variancia(n, v, med);
    dp = desvio_padrao(var);

    printf("Desvio Padrao = %.2f\n", dp);
    return 0;
}
