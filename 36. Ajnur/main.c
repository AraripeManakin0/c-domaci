#include <stdio.h>
#include <stdlib.h>

///             RADI

int main()
{
    int n, ncopy, i=0;
    printf("Unesite sedmocifren binaran broj:\t");
    scanf("%d", &n);
    ncopy = n;
    while (n>0){
        if (n%10 == 1)
            i++;
        n/=10;
    }
    if (i%2 != 0){
        ncopy += 10000000;
        printf("\n%d", ncopy);
    }
    else
        printf("\n%08d", ncopy);


    return 0;
}
