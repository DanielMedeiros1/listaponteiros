#include <stdio.h>
 
int main() {
 int    valor;
 int   *p1;
 float  temp;
 float *p2;
 char   aux;
 char  *nome = "Ponteiros";
 char  *p3;
 int    idade;
 int    vetor[3];
 int   *p4;
 int   *p5;
 
 /* (a) */
 valor = 10;
 p1 = &valor;
 *p1 = 20;
 printf("%d \n", valor); // correto, pois o *p1 = 20 esta alterando a variável valor que recebe 10, para 20, e em seguida printa o valor 20 
 
 /* (b) */
 temp = 26.5;
 p2 = &temp;
 *p2 = 29.0;
 printf("%.1f \n", temp); // correto, pois o *p2 = 29.0 esta alterando a variável temp que recebe 26.5, para 29.0, e em seguida printa o valor 29.0
 
 /* (c) */
 p3 = &nome[0];
 aux = *p3;
 printf("%c \n", aux); // correto, pois p3 esta armazenando o endereço da posição zero e em seguida é colocado o conteúdo dessa posição dentro de aux. Logo a saída é a primeira letra da palavra Ponteiros, "P". 
 
 /* (d) */
 p3 = &nome[4];
 aux = *p3;
 printf("%c \n", aux); // correto, ocorre o mesmo processo da letra (C), com a diferença que agora esta sendo feito na quarta posição, logo será mostrado a letra "e" 
 
 /* (e) */
 p3 = nome;
 printf("%c \n", *p3); // correto, agora como p3 = nome, nao esta indicando de maneira visual qual posição esta sendo referida, a linguagem C adota como sendo a primeira posição, logo o que será mostrado na tela é a letra "P" 
 
 /* (f) */
 p3 = p3 + 4;
 printf("%c \n", *p3); // correto, o p3 + 4 esta dizendo a mesma coisa que nome[4], logo na saída será mostrado o char da quarta posição, que é o "e" 
 
 /* (g) */
 p3--;
 printf("%c \n", *p3); // correto, pois como na questão anterior paramos na quarta posição, agora esta posição esta sendo atualizando, sofrendo um decremento de menos uma posição. Logo será mostrado o char da posição anterior, que é o "t"
 
 /* (h) */
 vetor[0] = 31;
 vetor[1] = 45;
 vetor[2] = 27;
 p4 = vetor;
 idade = *p4;
 printf("%d \n", idade); // correto, pois idade esta sendo atribuída ao conteúdo de p4, que é o vetor em sua posição 0, logo será impresso o valor inteiro dessa posição, que é o 31.
 
 /* (i) */
 p5 = p4 + 1;
 idade = *p5;
 printf("%d \n", idade); // correto, agora p5 esta pegando o p4 que é o vetor[0] e fazendo passar para a proxima posição, através do +1, ficando p5 = vetor[1]. Logo será impresso o valor inteiro dessa posição, que é o 45.
 
 /* (j) */
 p4 = p5 + 1;
 idade = *p4;
 printf("%d \n", idade); // correto, agora p4 esta pegando o p5 que de acordo com a questão anterior é o vetor[1] e esta fazendo passar para a proxima posição, ficando vetor[2]. Logo será impresso o valor inteiro dessa posição, que é o 27.
 
 /* (l) */
 p4 = p4 - 2;
 idade = *p4;
 printf("%d \n", idade); // correto, p4 que agora esta atribuído ao vetor[2], esta sendo decrementado em duas posições, assim seu novo valor será vetor[0]. Logo será impresso na tela o valor inteiro dessa posição, que é o 31.
 
 /* (m) */
 p5 = &vetor[2] - 1;
 printf("%d \n", *p5); // correto, p5 recebe o endereço do vetor[2] e sofre um decremento, ficando no fim p5 = &vetor[1]. Logo será impresso o valor inteiro dessa posição, que é o 45.
 
 /* (n) */
 p5++;
 printf("%d \n", *p5); // correto, pois como de acordo com a questão anterior o p5 = &vetor[1], agora ele sofre um incremento de 1, passando para a sua posição seguinte (&vetor[2]). Logo será impresso o valor inteiro dessa posição, que é o 27. 
 
    return(0);

}