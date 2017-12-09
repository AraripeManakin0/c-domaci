#include <stdio.h>
#include <stdlib.h>

///             RADI

int main()
{
    int s=0, i, n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    for (i=2; i<=n; i++)
        s += (i-1)*i;
    printf("\nDobijeni rezultat je: %d", s);

    return 0;
}
