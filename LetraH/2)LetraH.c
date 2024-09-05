#include<stdio.h>
#include<stdlib.h>

int main(){

    int a1, n, r, w;

    printf("Primeiro numero da PA: ");
    scanf("%d", &a1);
    printf("Razao da PA: ");
    scanf("%d", &r);
    printf("Numero n da PA: ");
    scanf("%d", &n);

    w= a1+(n-1)*r;

    printf("O %d -esimo numero da PA e: %d\n", n, w);




return 0;
}

