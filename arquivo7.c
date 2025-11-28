/* arquivo7.c

Explorando o for
Criar um laço para receber valores e calcular a média dos valores recebidos
*/
#include <stdio.h>

int main(){

    int i, valor, tamanho;
    float resultado;

    printf("Digite o numero de valores a receber = ");
    scanf("%d", &tamanho);

    resultado = 0;

    for(i = 0; i < tamanho; i++){
        printf("Digite um valor = ");
        scanf("%d", &valor);

        resultado = resultado + valor;
        printf("Status da variavel resultado = %.2f\n", resultado);
    }

    resultado = resultado / tamanho;
    printf("Media dos valores = %.2f", resultado);
}
