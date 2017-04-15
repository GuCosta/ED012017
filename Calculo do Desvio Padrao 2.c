/* Programa para calcular o desvio padrao de n valores uma populacao utilizando ponteiro */

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
    int i, tam;

    /* le o tamanho do vetor */
    printf("Digite a quantidade de populacoes: ");
    scanf("%d", &tam);

    *v = tam;

    /* leitura dos valores */
    for(i = 0; i < tam; i++){
        printf("Digite o valor da populacao %d: ", i + 1);
        scanf("%f", &v[i]);
    }
    med = media(tam, v);
    var = variancia(tam, v, med);
    dp = desvio_padrao(var);

    printf("Desvio Padrao = %.2f\n", dp);
    return 0;
}
