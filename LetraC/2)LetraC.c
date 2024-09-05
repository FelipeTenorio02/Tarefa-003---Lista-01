#include<stdio.h>
#include<stdlib.h>

int main(){
    char a[100];
    int b, c;
    printf("Qual seu nome: ");
    scanf("%s", &a);
    printf("Agora digite sua idade: ");
    scanf("%d", &b);
    c= 365*b;
    printf("voce viveu aproximadamente %d dias", c);


return 0;
}
