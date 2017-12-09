#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cifra;
    printf("Unesite cifru:\t");
    scanf("%d", &cifra);

    switch(cifra){
    case 1:
        printf("\nJeadan");
        break;
    case 2:
        printf("\nDva");
        break;
    case 3:
        printf("\nTri");
        break;
    case 4:
        printf("\nCetiri");
        break;
    case 5:
        printf("\nPet");
        break;
    case 6:
        printf("\nSest");
        break;
    case 7:
        printf("\nSedam");
        break;
    case 8:
        printf("\nOsam");
        break;
    case 9:
        printf("\nDevet");
        break;
    }


    return 0;
}
