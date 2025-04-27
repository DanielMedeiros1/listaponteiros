#include <stdio.h>
#include <stdlib.h>

int comparacao(const void *a, const void *b){ //criada a função que compara os valores do tipo float para saber qual é maior ou menor.

    if( *(const float *)a < *(const float *)b ){ //se o valor a(esquerda) for menor que o valor b(direita), então não troque de posição.
        return -1;
    }
    if( *(const float *)a == *(const float *)b ){ //se o valor a(esquerda) for igual que o valor b(direita), então não altera a posição.
        return 0;
    }
    if( *(const float *)a > *(const float *)b ){ //se o valor a(esquerda) for maior que o valor b(direita), então troque de posição.
        return 1;
    }
    
}

void ordenar_numeros_crescente(float *vetor, int n){ // função que recebe como parâmetros um ponteiro para float e um inteiro n.

    qsort(vetor, n, sizeof(float), comparacao); // função qsort() usada para ordenar os valores em ordem crescente, com base na função de
                                                // comparação criada no início do código.

}

int main(){

    float *vetor;  // são criadas duas variáveis, uma sendo um ponteiro de floats e outra um inteiro n.
    int n;
    scanf("%d", &n); //scanf esta sendo usado para que o usuário digite a quantidade de valores que terá dentro do array de floats.

    vetor = (float *)malloc(n * sizeof(float)); // linha criada para alocar memória para o vetor, com base na quantidade de valores dentro
                                                // do array.

    for(int i = 0; i < n; i++){  // Esse for() tem o objetivo percorrer cada posição do vetor, e o scanf lê e armazena os valores
        scanf("%f", &vetor[i]);  // adicionados pelo usuário.
    }

    ordenar_numeros_crescente(vetor, n); // chamada da função que contém o qsort()

    for(int i = 0; i < n; i++){
        printf("%.2f ", vetor[i]);  // Depois de tudo que foi feito anteriormente no código, é impresso na tela o resultado final do código.
                                    // Os valores impressos terão apenas duas casas decimais.
    }
    printf("\n");

    free(vetor); // Libera a memória que foi alocada dinamicamente para o ponteiro de floats vetor.

    return 0;

}