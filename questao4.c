/*4-Escreva uma função recursiva para calcular a potência (a^b) sem usar multiplicações
sucessivas em laços.*/
#include <stdio.h>

int potencia(int a, int b){
    if(b == 0){
        return 1;
    }else{
        return a * potencia(a, b-1);
    }
}

void main(){
    int a=0, b=0;

    printf("Informe o valor de a e b: ");
    scanf("%d \n %d", &a, &b);

    int resultado = potencia(a, b);

    printf("Resultado: %d", resultado);
}