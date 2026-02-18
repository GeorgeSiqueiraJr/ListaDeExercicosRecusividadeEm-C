/*8- Desenvolva uma função recursiva que converta um número inteiro decimal para binário.*/
#include <stdio.h>

int convertBinario(int n){
    
    if(n == 1){
        return 1;
    }else if(n ==0){
        return 0;
    }else{
        printf("%d", n %2);
        return convertBinario( n / 2);
    }
}
void main(){
    int n=0;
    printf("Informe o número: ");
    scanf("%d", &n);

    printf("%d ", convertBinario(n));
}