#include<stdio.h>
#include<stdlib.h>

int main(){

    int n1, n5, n10, n50, n100, TTreais;
    printf("Digite o valor total de dinheiro: ");
    scanf("%d", &TTreais);

    n100= TTreais/100;
    TTreais %= 100;
    n50= TTreais/50;
    TTreais %= 50;
    n10= TTreais/10;
    TTreais %= 10;
    n5= TTreais/5;
    TTreais %= 5;
    n1= TTreais/1;
    TTreais %= 1;

    printf("Sendo o valor total R$%d,00. Temos: \n", TTreais);
    printf("%d notas de 100\n", n100);
    printf("%d notas de 50\n", n50);
    printf("%d notas de 10\n", n10);
    printf("%d notas de 5\n", n5);
    printf("%d notas de 1\n", n1);





return 0;
}

