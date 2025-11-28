/* arquivo8.c
Encontre o menor valor digita pelo usuário
*/
#include <stdio.h>
int main(){

    int i, valor, tamanho, menorValor;
    float resultado;

    printf("Digite o numero de valores a ser digitado = ");
    scanf("%d", &tamanho);

    resultado = 0;

    for(i = 0; i < tamanho; i++){
        printf("Digite o %d valor = ", (i+1));
        scanf("%d", &valor);

        resultado += valor; //É equivalente a isso >> resultado = resultado + valor;

        if(i == 0){
            menorValor = valor;
        }else{
            if(menorValor > valor){
                menorValor = valor;
            }
        }
        printf("Resultado parcial = %.2f\n", resultado);
    }
    resultado = resultado / tamanho;
    printf("Media = %.2f\n", resultado);
    printf("Menor valor = %d\n", menorValor);
}
