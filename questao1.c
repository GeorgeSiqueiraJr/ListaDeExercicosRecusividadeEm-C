#include <stdio.h>
/*1- Implemente uma função recursiva que calcule o fatorial de um número inteiro n,
garantindo que o caso-base seja obedecido quando n = 0.*/

int fatorial(int numero){

    if(numero ==0){
        return 1;
    }else{
        return numero * fatorial(numero - 1);
    }
}

void main(){

    int n=0;
    
    printf("Informe o número:\n");
    scanf("%d", &n);

    int resultado=0;
    resultado = fatorial(n);

    printf("O resultado é: %d ", resultado);


}