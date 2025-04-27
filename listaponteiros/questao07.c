#include <stdio.h>

int main(void) {
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;
    f = vet;
    
    printf("contador/valor/valor/endereco/endereco\n");

    for(i = 0; i <= 4; i++) {
        printf("i = %d", i); // imprime na tela os valores de i, que vai de 0 ate 4.
        
        printf(" vet[%d] = %.1f", i, vet[i]); // o valor de i indica a posição do vetor e depois é impresso o conteúdo dessa posição.
        
        printf(" *(f + %d) = %.1f", i, *(f + i)); // imprime o conteúdo da posição do vetor, porém o a notação é diferente. f aponta para o
                                                  // endereço de memória na posição 0, que é depois somado ao valor de i (posição) e
                                                  // imprime na tela o conteúdo correspondente de tal posição. Essa soma significa que esta
                                                  // sendo avançado para a posição desejada. 
                                                   
        printf(" &vet[%d] = %X", i, &vet[i]); // imprime o endereço de memória em hexadecimal de cada posição usando a notação de vetores.
        
        printf(" (f + %d) = %X", i, f + i); // imprime o endereço de memória em hexadecimal, porém agora é usado a notação de ponteiros, onde
                                            // f aponta para o endereço de memória na posição 0, que depois é somada ao valor de i (posição)
                                            // em questão. Essa soma significa que esta avançando para a posição desejada.
        printf("\n");
    }

    return 0;
}