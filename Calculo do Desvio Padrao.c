/* Programa para calcular o desvio padrao de 10 valores de uma populacao */

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

    for(i = 0; i < 10; i++){
        s = s + (v[i] - m) * (v[i] - m);
    }
    return s/n;
}

/* Funcao para calculo do desvio padrao */
float desvio_padrao(float var){
    float desv_pad;

    desv_pad = sqrt(var);
    return desv_pad;
}

int main(void){
    float v[10];    /* variavel que recebe 10 valores de ponto flutuante(float) em um vetor */
    float med, var, dp;
    int i;

    /* leitura dos valores */
    for(i = 0; i < 10; i++){
        printf("Digite o valor da populacao %d: ", i + 1);
        scanf("%f", &v[i]);
    }
    med = media(10, v);
    var = variancia(10, v, med);
    dp = desvio_padrao(var);

    printf("Desvio Padrao = %.2f\n", dp);
    return 0;
}
