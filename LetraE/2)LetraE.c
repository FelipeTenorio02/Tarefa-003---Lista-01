#include<stdio.h>
#include<stdlib.h>

int main(){

    float a, l, area, qntT, qntL ;

    printf ("digite as medidas respectivamente\naltura: ");
    scanf ("%f", &a );
    printf("largura: ", &l);
    scanf("%f", &l);
    area= a*l;
    qntT= 0.3*area;
    qntL= qntT/2;
    printf ("%.2f latas serao necessarias ", qntL );
    scanf("%f", &qntL);






return 0;
}

