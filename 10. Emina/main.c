#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, rezultat;
    printf("Unesite x\t");
    scanf("%f", &x);

    rezultat = pow(1+(x/8)+(1/2)*pow(x/3,2)*(1/6)*pow(x/3,3)*(1/24)*pow(x/8,4)*(1/120)*pow(x/8,5),8);

    printf("Rezultat je %.7f", rezultat);

    return 0;
}
