#include <stdio.h>
#include <stdlib.h>

///         RADI

int main()
{
    int s=0, i, f=1, n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        s += i * f;
        f *= i;
    }
    printf("Suma je: %d", s);

    return 0;
}
