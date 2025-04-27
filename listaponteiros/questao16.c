#include <stdio.h>
 
int main(){
 
 float aloha[10], coisas[10][5], *pf, value = 2.2;
 int i=3;

 aloha[2] = value;         // Correto, pois possuem o mesmo tipo de dado (float), logo a atribuição é possível
 scanf("%f", &aloha);    // Incorreto, pois &aloha esta incorreto, o correto seria aloha ou &aloha[1], por exemplo.
 aloha = "value";        // Incorreto, pois não tem como atribuir uma string a um vetor de floats
 printf("%f", aloha); // Incorreto, pois não foi passado antes qual seria a posição e o valor da posição, e para essa linha de código 
                      // funcionar corretamente, dentro do printf deveria ser especificado a posição em questão

 coisas[4][4] = aloha[3];      // Correto, a atribuição de arrays floats esta correta
 coisas[5] = aloha;     // Incorreto, pois não se pode atribuir arrays de forma direta e o tamanho de ambos também são diferentes.
 pf = value;     // Incorreto, pf é um ponteiro para float, logo ele deveria receber o endereço de memória de value (pf = &value)
 pf = aloha;     // Correto, pois como pf é um ponteiro para float e aloha é a mesma coisa que &aloha[0], a atribuição esta sendo de um 
                 // ponteiro para um endereço de memória.

}