#include <stdio.h>
 
int main(){
    int vet[] = {4, 9, 13};
    int i;
    for(i=0;i<3;i++){
        printf("%d ", *(vet+i));
    }
}
 
// Nesse código acima, o for está sendo usado para percorrer as posições do array vet[]. Dessa forma, esta sendo impresso na tela o conteúdo 
// dessas posições, que são os inteiros 4, 9 e 13, respectivamente.


#include <stdio.h>

int main(){
    int vet[] = {4, 9, 13};
    int i;
    for(i=0;i<3;i++){
        printf("%X ",vet+i);
    }
}

// Já nesse outro código, o for funciona da mesma maneira do código anterior, porém o que esta sendo impresso na tela são os endereços de 
// memória em hexadecimal das posições do array vet[] onde estão armazenados os números inteiros.