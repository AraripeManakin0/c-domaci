#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, a, b, c;
    printf("Unesite broj: ");
    scanf("%d", &x);
    for (a=1; a<10; a++){
        for (b=0; b<10; b++){
            for (c=0; c<10; c++){
                if ((a+b+c)==x)
                    printf("\n%d%d%d", a, b, c);
            }
        }
    }


    return 0;
}
