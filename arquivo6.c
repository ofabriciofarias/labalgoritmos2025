/* arquivo6.c
Programa que calcula os elementos de uma função linear
f(x) = a x + b
*/
#include <stdio.h>

int main(){

    int i, a, xMax, b;

    printf("Digite o numero de elementos que deseja calcular:  ");
    scanf("%d", &xMax);

    a = 3;
    b = 6;

    //f(x) = 3 * x + 6
    printf("[ ");
    for(i = 0; i < xMax; i++){
        printf("%d", (a*i+b));
        if(i == xMax-1){
            printf(" ]\n");
        }else{
            printf(", ");
        }
    }
}
