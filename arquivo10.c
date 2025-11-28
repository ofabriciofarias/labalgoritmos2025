/*
Crie um vetor de 6 posições. Popule o vetor. Depois encontre o menor e maior valor. Apresente
ambos na tela.
*/
#include <stdio.h>
int main(){
    int tam = 3;
    int valor[tam], i, menor, maior;

    for(i = 0; i < tam; i++){
        printf("Digite o valor = ");
        scanf("%d", &valor[i]);
    }
    for(i = 0; i < tam; i++){
        if(i == 0){
            menor = valor[i];
            maior = valor[i];
        }else{
            if(menor > valor[i]){
                menor = valor[i];
            }
            if(maior < valor[i]){
                maior = valor[i];
            }
        }
    }
    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d\n", menor);
}
