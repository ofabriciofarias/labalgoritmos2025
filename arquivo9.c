/*
Repetir o laço enquanto o valor digitado for par
*/
#include <stdio.h>

int main(){
    int valor, status;

    status = 1;

    while(status == 1){ //EQUIVALENTE ao ENQUANTO!!!
        printf("Digite um valor = ");
        scanf("%d", &valor);

        if(valor%2 == 0){
            printf("Valor par = %d\n", valor);
        }else{
            status = 0;
            printf("Valor impar, saindo do programa\n");
        }
    }
}

