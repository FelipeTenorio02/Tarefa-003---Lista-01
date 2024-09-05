#include<stdio.h>
#include<stdlib.h>

int main(){

    float P, V, T, M, R;

    printf("Digite a Pressao: ");
    scanf("%f", &P);
    printf("Digite o Volume: ");
    scanf("%f", &V);
    printf("Digite a Temperatura: ");
    scanf("%f", &T);

    R = P*V;
    M = R/(0.37*(T+460));


    printf("A Massa de Ar desse pneu e = %.3f \n\n", M);




return 0;
}
