#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Unesite broj: ");
    scanf("%f", &x);
    if (ceilf(x)==floorf(x))
        printf("\nUneti broj je ceo");
    else
        printf("Uneti broj je decimalan");

    return 0;
}
