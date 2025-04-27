// Ponteiro para função é uma forma de dado que tem como objetivo armazenar o endereço de uma função.

#include <stdio.h>

void rodar_funcao(int x, int y, int (*funcao)(int, int)){ // a função rodar função recebe como parâmetros dois números inteiros e um ponteiro
                                                          // para uma função que tem como parâmetros dois inteiros e retorna um valor inteiro.

    int resposta = funcao(x, y); // é criado uma variável para armazenar o resultado da função apontada pelo ponteiro.
    printf("%d ", resposta); // aqui é impresso na tela o valor inteiro que é obtido pela função.

}

int divisao(int a, int b){ // uma nova função é criada, com o objetivo de obter o resultado da divisão de dois números inteiros. Essa função
                           // é a que está sendo apontada la na função rodar_funcao.
      
   return (a / b);  // divisão inteira de dois valores inteiros.
}

int main(){

    int n1 = 8;    // são criadas variáveis que recebem valores para poder serem inicializados dentro da função rodar_função.
    int n2 = 2;
    
    rodar_funcao(n1, n2, divisao); // chamamos o rodar_função e passamos como parâmetros essas duas variáveis que estão dentro do main() e 
                                   // a função divisão que foi apontada pelo ponteiro inicial (*funcao)(int, int).

    return 0;
}