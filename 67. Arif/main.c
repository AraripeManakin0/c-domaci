#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i = 1;
    double x, clan, uslov, lnx;

    lnx = 0;
    clan = 1;
    uslov = pow(10,-6);

    scanf("%lf", &x);

    if (fabs(x) < 2){

        while(clan > uslov){
            clan = pow(-1,i-1) * (pow(x-1,i)/i);
            lnx += clan;
            i++;
        }

        printf("\nlnx=%f", lnx);
    }
    else
        printf("\nBroj ne zadovoljava uslov");



    return 0;
}
