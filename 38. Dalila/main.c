#include <stdio.h>
#include <stdlib.h>

///         RADI  , u zadatku se trazilo da binarni broj ide s desna na levo

int main()
{
    int dec, bin=0, broj;
    printf("Unesite dekadni broj:\t");
    scanf("%d", &dec);
    while (dec>0){
        broj = dec%2;
        bin = 10 * bin + broj;
        dec /=2;
    }
    printf("\nBinarni ekvivalent tog broja je %d", bin);


    return 0;
}
