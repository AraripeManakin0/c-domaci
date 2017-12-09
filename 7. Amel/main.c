#include <stdio.h>
#include <stdlib.h>

///             RADI

int main()
{
    int a, b, c;
    printf("Unesite stranice trougla:\t");
    scanf("%d %d %d", &a, &b, &c);
    if (a*a + b*b == c*c)
        printf("\nTrougao je pravougli");
    else if (a*a + b*b > c*c)
        printf("\nTrougao je ostrougli");
    else
        printf("\nTrougao je tupougli");

    return 0;
}
