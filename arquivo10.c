/*
Crie um vetor de 6 posições. Popule o vetor. Depois encontre o menor e maior valor. Apresente
ambos na tela.
*/
#include <stdio.h>
int main(){
    int tam = 6;
    int valor[tam], i, menor, maior;

    //Populo o vetor!
    for(i = 0; i < tam; i++){
        printf("Digite o valor = ");
        scanf("%d", &valor[i]);
    }
    //Identificar o menor e maior valor no vetor
    for(i = 0; i < tam; i++){
        if(i == 0){
            menor = valor[i];
            maior = valor[i];
            printf("\n\n\nRodada %d\nMenor valor = %d\nMaior Valor = %d\n", i, menor, maior);
        }else{
            if(menor > valor[i]){
                menor = valor[i];
                printf("\n\nRodada %d\nMenor valor = %d\n", i, menor);
            }
            if(maior < valor[i]){
                maior = valor[i];
                printf("\n\nRodada %d\n Maior valor = %d\n", i, maior);
            }
        }
    }
    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d\n", menor);
}
