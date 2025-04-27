#include <stdio.h>
#include <stdlib.h>

void soma_vetorial(int *vetor1, int *vetor2, int *resultado, int n){
    
    for(int i = 0; i < n; i++){
        resultado[i] = vetor1[i] + vetor2[i];
    }
}

int main(){

    int n; 
    int *vetor1; 
    int *vetor2; 
    int *resultado;

    scanf("%d", &n);

    vetor1 = (int *)malloc(n * sizeof(int));
    vetor2 = (int *)malloc(n * sizeof(int));
    resultado = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor1[i]);
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor2[i]);
    }

    soma_vetorial(vetor1, vetor2, resultado, n);

    for(int i = 0; i < n; i++){
        printf("%d ", resultado[i]);
    }
    printf("\n");

    free(vetor1);
    free(vetor2);
    free(resultado);

    return 0;

}