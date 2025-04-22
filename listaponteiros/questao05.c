// A saída "gostinho" não foi obtida pois no início do código a função denominada funcao, recebe como 
// parâmetro um ponteiro para ponteiro de char e dentro do corpo da função tem um str++ que tem como finalidade incrementar em 1, 
// porém como ele esta agindo localmente, ele não altera em nada dentro do int main() e essa função fica sem funcionalidade.
// Com isso, para corrigir esse código e obter a saída esperada, é necessário que dentro da função seja: (*str)++, assim quando a função for chamada no int main(), 
// ela funcionará corretamente (pulando o primeiro char da string "Agostinho") e será impresso na tela "gostinho"   