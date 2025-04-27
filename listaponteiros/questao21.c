#include <stdio.h>
#include <stdlib.h>

int comparacao(const void *a, const void *b){ 

    if( *(const int *)a < *(const int *)b ){ 
        return -1;
    }
    if( *(const int *)a == *(const int *)b ){ 
        return 0;
    }
    if( *(const int *)a > *(const int *)b ){ 
        return 1;
    }
    
}

void ordenar_numeros_crescente(int *vetor, int n, int (*comparar)(const void*, const void*)){

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (comparar(&vetor[j], &vetor[j + 1]) > 0) {
                int novo = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = novo;
            }
        }
    }
}

int main(){

    int *vetor;
    int n;
    scanf("%d", &n);

    vetor = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    ordenar_numeros_crescente(vetor, n, comparacao);

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}