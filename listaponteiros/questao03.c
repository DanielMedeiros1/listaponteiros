// As seguintes expressões possuem erro de compilação: 2) *q = &j; 4) i = (*&)j; 7) q = *p;
// 2) o erro acontece pois não da para atribuir de maneira direta um endereço a um inteiro  
// 4) o erro se da na sintaxe, para corrigir deveria ser retirado os parênteses
// 7) o erro ocorre pois esta tentado armazenar um valor int em uma variável do tipo ponteiro para   
// inteiro que espera receber um endereço