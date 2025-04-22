// o erro desse código esta na estruturação do struct e também não esta sendo alocado a memoria do ponteiro do struct.
// Abaixo mostrarei o código corrigido:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct teste{

    int x;
    char nome[50];

};

int main(){

    struct teste *s = malloc(sizeof(struct teste));
    s-> x = 3;
    strcpy(s-> nome, "jose"); 

    printf("%d \n", s->x);
    printf("%s", s->nome);

    free(s);
    return 0;
}