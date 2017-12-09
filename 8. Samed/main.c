#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Unesite trocifren broj n:\t");
    scanf("%d", &n);

    if (n%10 < 5)
        n += 2;
    else
        n -= 5;
    printf("\nDobijeni broj n je: %d", n);

    return 0;
}
