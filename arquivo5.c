/* arquivo5.c
Vamos criar um programa que conte até 20 e apresente na tela
*/
#include <stdio.h> //Importação da biblioteca

int main(){ //ALGORITMO

    int i; //DECLARE i NUMERICO

    /* Analogamente ao nosso PARA
    PARA i <- 1 ATE 20 FAÇA
    INICIO
        ESCREVA i
    FIM
    */
    for(i = 0; i < 20; i++){
        printf("Computador entende %d - Humano entende %d\n", i, i+1);
    }
} //FIM_ALGORITMO
