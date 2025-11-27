/*
Crie um programa que apresente um menu de opções para o usuário
1 - Faça soma
2 - Faça subtração
*/
#include <stdio.h>

int main(){
    int op, a, b, r;

    printf("MENU\n1 - Soma\n2 - Subtracao\n-> ");
    scanf("%d", &op);

    if(op == 1){
        printf("Digite os valores de a e b = ");
        scanf("%d%d", &a, &b);
        r = a + b;
        printf("Soma = %d\n", r);
    }else if(op == 2){
        printf("Digite os valores de a e b = ");
        scanf("%d%d", &a, &b);
        r = a - b;
        printf("Subtracao = %d\n", r);
    }else{
        printf("Entrada invalida! Erro!\n");
    }
}
