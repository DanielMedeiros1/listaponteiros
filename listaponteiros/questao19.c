#include <stdio.h>
#include <stdlib.h>

void ordenar_numeros_crescente(float *vetor, int n){

    for (int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(vetor[j] > vetor[j+1]){
                float novo = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = novo;
            }
        }
    }
}


int main(){

    float *vetor;
    int n;
    scanf("%d", &n);

    vetor = (float *)malloc(n * sizeof(float));

    for(int i = 0; i < n; i++){
        scanf("%f", &vetor[i]);
    }

    ordenar_numeros_crescente(vetor, n);

    for(int i = 0; i < n; i++){
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;

}
