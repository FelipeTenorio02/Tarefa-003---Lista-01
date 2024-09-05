#include<stdio.h>
#include<stdlib.h>

int main(){

    float c;
    float f;

    printf("Digite o grau em Farenheit: ");
    scanf("%f", &f);
    c = (5.0/9.0)*(f-32);
    printf("Convertendo fica: \n%.1f Farenheit = %.1f graus Centigrados/Celcius\n\n", f, c );


return 0;
}
