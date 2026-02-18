/*2-Crie uma função recursiva que calcule a soma dos números de 1 até n.*/
#include <stdio.h>

int soma(int n){
    if( n == 1){
        return 1;
    }else{
        return n + soma(n-1);
    }
}

void main(){
    int num=0;

    printf("Informe um número: ");
    scanf("%d", &num);

    int resultado=0;
    resultado = soma(num);

    printf("Resultado é: %d ", resultado);

}