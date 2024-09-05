#include<stdio.h>
#include<stdlib.h>

int main(){

    int n1, n10, n50, n100, TTnotas;
    printf("Quantidade de Notas \n");
    printf("De 1: ");
    scanf("%d", &n1);
    printf("De 10: ");
    scanf("%d", &n10);
    printf("De 50: ");
    scanf("%d", &n50);
    printf("De 100: ");
    scanf("%d", &n100);


    TTnotas =n1*1 + n10*10 + n50*50 + n100*100;
    printf("voce tem R$%d,00\n\n", TTnotas);




return 0;
}
