#include <stdio.h>
#include <stdlib.h>

///             RADI

int main()
{
    int n, m, p=1, i;
    printf("Unesite dva broja:\t");
    scanf("%d %d", &n, &m);
    for (i=0; i<=m; i++){
        p*= n + i*m;
    }
    printf("\nDobijeni rezultat je %d", p);

    return 0;
}
