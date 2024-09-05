#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float a,b,c,w,raiz1,raiz2;

    printf("Digite os coeficientes \n");
    printf("De a: ");
    scanf("%f", &a);
    printf("De b: ");
    scanf("%f", &b);
    printf("De c: ");
    scanf("%f", &c);

    w=b*b - 4*a*c;

    if(w<0){
        printf("***SEM RAIZES REAIS***\n\n");
    }
    else if(w==0){
        raiz1= -b/(2*a);
        printf("***POSSUI RAIZ REAL***");
    }
    else{
        raiz1= ((-b+sqrt(w)))/(2*a);
        raiz2= (-b-sqrt(w))/(2*a);
        printf("calculando as raizes...\nRaizes encontradas: \n\nRaiz1 = %.3f \nRaiz2 = %.3f \n\n", raiz1, raiz2);
    }





return 0;
}

