#include <stdio.h>
#include <stdlib.h>

///         RADI

int main()
{
    int n, f=1, i;
    float s=0.0;
    printf("Unesite broj: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        s += 1.0 / (float)(i * f);
        f *= i;
    }
    printf("Suma je: %f", s);

    return 0;
}
