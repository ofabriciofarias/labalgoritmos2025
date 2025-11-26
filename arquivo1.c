/* arquivo1.c
Arquivo 01
Código fonte que resolve um problema de receber dois valores
digitados pelo usuário e efetua a soma
*/
#include <stdio.h>

int main(){

    int a, b, resultado;

    printf("Digite o valor de a = "); //ESCREVA
    scanf("%d", &a); //LEIA

    printf("Digite o valor de b = ");
    scanf("%d", &b);

    resultado = a + b; //Atribuição de valor <-

    printf("Resultado = %d\n", resultado);
    printf("%d + %d = %d", a, b, resultado);
}
