#include<stdio.h>
#include<stdlib.h>


int main() {

    float Acao1 = 24.13;
    float Acao2 = 11.00;
    float Acao3 = 38.65;
    float Dividendo1 = 17.00;
    float Dividendo2 = 35.00;
    float Dividendo3 = 25.00;
    float DinheiroTT = 1000.00;
    int qtd1, qtd2, qtd3;

    printf("Digite a quantidade de Acao 1 que deseja comprar (R$24.13 por unidade): ");
    scanf("%d", &qtd1);
    printf("Digite a quantidade de Acao 2 que deseja comprar (R$11.00 por unidade): ");
    scanf("%d", &qtd2);
    printf("Digite a quantidade de Acao 3 que deseja comprar (R$38.65 por unidade): ");
    scanf("%d", &qtd3);

    float TT1 = qtd1 * Acao1;
    float TT2 = qtd2 * Acao2;
    float TT3 = qtd3 * Acao3;
    float TTcompras = TT1 + TT2 + TT3;

    if (TTcompras > DinheiroTT) {
        printf("Voce excedeu o limite de R$ 1.000,00. O total e de R$ %.2f.\n", TTcompras);
    }
    else {

        float dy1 = (Dividendo1 / Acao1) * 100;
        float dy2 = (Dividendo2 / Acao2) * 100;
        float dy3 = (Dividendo3 / Acao3) * 100;

        printf("\nVoce comprou:\n");
        printf("Acao 1: %d unidades (R$ %.2f)\n", qtd1, TT1);
        printf("Acao 2: %d unidades (R$ %.2f)\n", qtd2, TT2);
        printf("Acao 3: %d unidades (R$ %.2f)\n", qtd3, TT3);
        printf("\nDividendo Yield de cada acao:\n");
        printf("Acao 1: %.2f%%\n", dy1);
        printf("Acao 2: %.2f%%\n", dy2);
        printf("Acao 3: %.2f%%\n", dy3);
        printf("\nTotal investido: R$ %.2f\n", TTcompras);
    }

    return 0;
}

