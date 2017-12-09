#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m, n, p=1, i;
    printf("Unesite dva broja:\t");
    scanf("%d %d", &m, &n);
    for (i=1; i<=m; i++){
        p *= n + pow(-1,i-1) * i*m;
    }
    printf("\nDobijeni rezultat je %d", p);

    return 0;
}
