/* arquivo5.c
Vamos criar um programa que conte até 20 e apresente na tela
*/
#include <stdio.h>

int main(){

    int i;

    /* Analogamente ao nosso PARA
    PARA i <- 1 ATE 20 FAÇA
    INICIO
        ESCREVA i
    FIM
    */
    for(i = 0; i < 20; i++){
        printf("%d\n", i+1);
    }
}
