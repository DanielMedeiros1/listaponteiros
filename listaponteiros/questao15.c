#include <stdio.h>
 int main(){
    
    unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},
    {7, 8, 9}, {10, 11, 12}};
    
    printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}

// x + 3, resulta no x[3] que é a quarta linha (10, 11, 12) da matriz. Ela esta pegando o endereço da quarta linha na posição 0, 
// que é onde esta o 10.

// *(x + 3), x +3 é o equivalente ao x[3] e o * esta pegando o conteúdo desse array na posição 0, que resulta novamente no valor 10

// *(x + 2) + 3, agora o x + 2 equivale ao x[2] (terceira linha da matriz), *(x[2]) esta pegando o conteúdo dessa linha na posição 0, que é 
// o número 7, e por fim, a partir da posição onde o 7 se encontra, é avançado mais 3 posições, chegando assim na posição do valor 10.

// Ou seja, nos 3 casos será impresso na tela o endereço de memória da posição em que se encontra o número 10.
