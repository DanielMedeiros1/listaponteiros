#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p;

    p = (int *)malloc(sizeof(int));

    *p = 7;

    printf("%d", *p);

// free(p); Para evitar que tenha vazamento de memória, é necessário usar o free, pois para cada malloc usado deve ter um free associado.

    return 0;
}