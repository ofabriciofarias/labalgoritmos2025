//arquivo7_.c
#include <stdio.h>

int main(){

    int i, r;

    for(i = 0; i < 4; i++){
        printf("Digite um valor da %d-esima posicao do vetor = ",i);
        scanf("%d", &r);

        printf("\nValor digitado na posicao %d = %d\n", i, r);
    }
}
