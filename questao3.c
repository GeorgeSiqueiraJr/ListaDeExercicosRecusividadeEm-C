/*3- Escreva uma função recursiva que some apenas os números pares de 1 até n.*/
#include <stdio.h>

int somarPar(int n){
    if(n == 0){
        return 0;
    }if(n % 2 == 0){
        return n + somarPar(n-1);
    }else{
        return somarPar(n-1);
    }
}
void main(){

    int num=0;

    printf("Informe o número: \n");
    scanf("%d", &num);

    int resultado=0;
    resultado = somarPar(num);

    printf("Resultado: %d", resultado);
}