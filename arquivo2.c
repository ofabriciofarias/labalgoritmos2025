/* arquivo2.c
Arquivo 02
Crie um programa que calcule o aumento salarial de um funcionário
Se o funcionário receber até 3 mil reais, o aumento deve ser
de 20%, se o funcionário receber acima de 3 mil reais, o aumento
deve ser de 10%
*/
#include <stdio.h>
int main(){ //ALGORITMO
    float salario, novoSalario; //Tipo numérico Racional

    printf("Digite seu salario atual = ");
    scanf("%f", &salario);

    if(salario <= 3000) //SE salario <= 3000 ENTAO
    { //INICIO
        novoSalario = salario * 1.2;
    }//FIM
    else //SENAO ENTAO
    { //INICIO
        novoSalario = salario * 1.1;
    } //FIM
    printf("Novo salario = %.2f\n", novoSalario);
}//FIM_ALGORITMO
