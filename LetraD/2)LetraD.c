#include<stdio.h>
#include<stdlib.h>

int main(){

    float a;
    float b= 3.14, c, d;
    //b(pi), c(raio), d(area)
    printf("Qual o raio do circulo: ");
    scanf("%f", &c);
    d= b*c*c;

    printf(" \nCalculando a area do circulo....\n      A area e aproximadamente: %.2f\n", d);



return 0;
}
