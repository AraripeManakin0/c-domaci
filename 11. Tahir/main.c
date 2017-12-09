#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Unesite broj a:  ");
    scanf("%d", &a);
    printf("\nUnesite broj b:  ");
    scanf("%d", &b);

    /// ako su a=1 i b=2
    a = a - b; /// a = -1
    b = a + b; /// b =  1
    a = b - a; /// a =  2

    printf("\nBroj a je: %d", a);
    printf("\nBroj b je: %d", b);

    return 0;
}
