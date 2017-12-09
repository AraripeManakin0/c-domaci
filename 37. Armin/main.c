#include <stdio.h>
#include <stdlib.h>
#include <math.h>

///            RADI

int main()
{
    int n, i, ncopy, brojcifara=0, rezultat=0;
    printf("Unesite binarni broj:\t");
    scanf("%d", &n);
    ncopy = n;
    while (ncopy > 0){
        ncopy /= 10;
        brojcifara++;
    }
    for (i=0; i<brojcifara; i++){
        rezultat += n%10 * pow(2,i);
        n /= 10;
    }
    printf("\nRezultat je %d", rezultat);

    return 0;
}
