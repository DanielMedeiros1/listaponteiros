// Após testar os códigos usando o meu método de ordenação manual e o método qsort(), foi possível perceber que a diferença nos tempos
// de execução ocorrem quando o vetor vai ficando cada vez maior. Eu usei a função clock() da biblioteca <time.h> e randomizei a quantidade
// de números que estariam dentro do vetor. A diferença ficou mais perceptível quando foi colocado dez mil valores no vetor, onde usando o
// método manual demorou cerca de 0.080000 segundos e usando qsort() foi 0.001000 segundos.
// Portanto o qsort() é mais eficiente que o outro método de ordenação manual, porém ambos são funcionais e cumprem o seu papel.