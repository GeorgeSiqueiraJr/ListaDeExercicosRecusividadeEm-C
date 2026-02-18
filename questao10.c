#include <stdio.h>

int produto(int a, int b){
    if(b == 0){
        return 0;
    }else{
        return a + produto(a, b -1);
    }
}

void main (){
    int a=0, b=0;
    printf("Informe o número base: ");
    scanf("%d", &a);
    printf("Informe o número expoente: ");
    scanf("%d", &b);

    printf("Produto: %d", produto(a, b));
}