#include <stdio.h>
/*7- Construa um algoritmo recursivo que imprima os números de n até 0.*/
int na0(int n){
    if(n == 0){
        return 0;
    }else{
        printf("%d ", n);
        return na0(n-1);
    }
}

void main(){
    int n=0;

    printf("Informe o numero: ");
    scanf("%d", &n);
    
    printf("%d", na0(n));

}