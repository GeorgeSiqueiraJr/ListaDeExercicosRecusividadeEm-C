/*6- Implemente um algoritmo recursivo que calcule o n-ésimo termo da sequência de
Fibonacci.*/
#include <stdio.h>

int fibonnacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibonnacci(n-1) + fibonnacci (n -2);
    }
}

void main (){
    int n=0;

    printf("Informe o numero: ");
    scanf("%d", &n);
    
    printf("Resultado: %d", fibonnacci(n));


}

