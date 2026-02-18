/*5- Construa uma função recursiva para contar quantos dígitos existem em um número
inteiro positivo.*/
#include <stdio.h>
int contarDigitos(int n){
    if( n < 10){
        return 1;
    }else{
        return 1 + contarDigitos(n / 10) ;
    }
}
void main (){
    int n=0;

    printf("Informe o número: ");
    scanf("%d", &n);

    int r= contarDigitos(n);

    printf("Resultado: %d", r);
}