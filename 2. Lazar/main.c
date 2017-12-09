#include <stdio.h>
#include <stdlib.h>

///             RADI

int main()
{
    int a, b, c;
    printf("Unesite tri broja:\t");
    scanf("%d %d %d", &a, &b, &c);
    if (a<b && a<c)
        printf("\nNajmanji broj je %d", a);
    else if (b<a && b<c)
        printf("\nNajmanji broj je %d", b);
    else
        printf("\nNajmanji broj je %d", c);


    return 0;
}
