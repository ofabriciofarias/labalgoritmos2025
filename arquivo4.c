/* arquivo4.c
Vamos criar uma calculadora que faz a soma, subtração, multiplicação e divisão
*/
//Importação da biblioteca
#include <stdio.h>

//Método main
int main(){
    //Declaração das variaveis
    int op;
    float a, b, r;

    printf("MENU\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n-> ");
    scanf("%d", &op);

    if(op > 0 && op < 5){ //O E na linguagem C é representado por &&
        //Recebendo as entradas do usuário
        printf("Digite o primeiro valor = ");
        scanf("%f", &a);
        printf("Digite o segundo valor = ");
        scanf("%f", &b);

        if(op == 1){
            //Calcular a soma
            r = a + b;
            printf("Resultado da soma de %.2f + %.2f = %.2f\n", a, b, r);
        }else if(op == 2){
            //Calcular a subtracao
            r = a - b;
            printf("Resultado da subtracao de %.2f - %.2f = %.2f\n", a, b, r);
        }else if(op == 3){
            //Multiplicacao
            r = a * b;
            printf("Resultado da multiplicacao de %.2f * %.2f = %.2f\n", a, b, r);
        }else{
            //Tentar calcular a divisao
            if(b != 0.0){
                r = a/b;
                printf("Resultado da divisao de %.2f / %.2f = %.2f\n", a, b, r);
            }else{
                printf("Impossivel calcular a divisao por zero\n");
            }
        }
    }else{
        printf("Entrada Invalida!\n");
    }
    printf("Fim do programa\n");
}




