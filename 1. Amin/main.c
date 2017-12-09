#include <stdio.h>
#include <stdlib.h>

///          RADI

int main()
{
    int x, y;
    printf("Unesite dva broja: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (y<0)
        y *= (-1);

    x += y;

    printf("\n X je jednako %d", x);

    return 0;
}
