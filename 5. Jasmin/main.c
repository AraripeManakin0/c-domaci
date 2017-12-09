#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Unesite koordinate tacke A:\t");
    scanf("%d %d", &x, &y);
    if (y == 3*x + 7)
        printf("\nTacka A pripada pravoj y=3x+7");
    else
        printf("\nTacka A ne pripada pravoj y=3x+7");

    return 0;
}
