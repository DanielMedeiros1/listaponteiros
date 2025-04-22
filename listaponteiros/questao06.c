// Um inteiro tem 4 bytes de tamanho e p é um ponteiro para ponteiro de char, t = (p += sizeof(int))[-1], ou seja p é incrementado em 4 
// posições dentro do array, passando a apontar para a posição p[4], e esse [-1] significa que será decrementado em uma posição, assim t=p[3]
// Ao chegar no int main(), sabemos que o p aponta para um ponteiro para um array de char (*a[]) e a função é chamada com base nesse array. 
// Assim, de acordo com o que foi feito na função inicial, t = p[3], a saída desse código será o conteúdo da posição 3 do array de chars 
// (a[3]), que será "gh".    