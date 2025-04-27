// Dentro do main(), é dito que c = 5, b = &c e a = &b, após isso a função f é chamada e seus parâmetros são passado como sendo f(c,b,a).
// Isso nos mostra que c esta sendo passado como valor de a, logo dentro da função é feito uma conta que é a += 3, logo a = 5+3 = 8.
// O proximo passo é achar o valor de c dentro da função, esse que foi declarado no main() como sendo igual a 5. Logo quando entramos na 
// função, percebemos uma conta que esta incrementando esse valor de c em mais uma unidade, ou seja **ppc += 1, logo c = 5+1 = 6
// O penúltimo passo é achar o valor de b, que é declarado no main() como sendo igual ao endereço de c, logo o ponteiro pega o conteúdo de c, 
// que dentro da função é igual a 6, e realiza uma nova conta que seria o incremento de duas unidades ao *pb, sendo assim, b+=2, b=6+2 = 8.
// Por fim, é realizado um dentro da função um return a + b + c (8+8+6) que resulta no valor 22 e que é mostrado como resposta do programa. 