#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, r;
    printf("Unesite koordinate tacke A:\t");
    scanf("%d %d", &x, &y);
    printf("\nUnesite poluprecnik kruznice:\t");
    scanf("%d", &r);

    if (x*x + y*y == r*r)
        printf("\nTacka A je na kruznici");
    else if (x*x + y*y > r*r)
        printf("\nTacka A je van kruznice");
    else
        printf("\nTacka A je u kruznici");

    return 0;
}
