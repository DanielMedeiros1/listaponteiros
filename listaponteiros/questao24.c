#include <stdio.h>


void multiplica_matrizes(int *A, int *B, int *C, int linhasA, int colunasA, int colunasB) {
    
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            C[i * colunasB + j] = 0;
            for (int k = 0; k < colunasA; k++) {
                C[i * colunasB + j] += A[i * colunasA + k] * B[k * colunasB + j];
            }
        }
    }
}


void imprimir_matriz(int *M, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", M[i * colunas + j]);
        }
        printf("\n");
    }
}

int main() {
    
    int linhasA = 2, colunasA = 3, colunasB = 4;

    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int C[2][4]; 

    multiplica_matrizes((int *)A, (int *)B, (int *)C, linhasA, colunasA, colunasB);

    printf("Matriz A:\n");
    imprimir_matriz((int *)A, linhasA, colunasA);

    printf("\nMatriz B:\n");
    imprimir_matriz((int *)B, colunasA, colunasB);

    printf("\nMatriz C = A x B:\n");
    imprimir_matriz((int *)C, linhasA, colunasB);

    return 0;
}
