#include <stdio.h>
#include <stdlib.h>

///             RADI

int main()
{
    int n, c, imalicifru=0;
    printf("Unesite broj veci od 1000:\t");
    scanf("%d", &n);
    printf("Unesite cifru koju zelite da proverite:\t");
    scanf("%d", &c);
    while (n>0){
        if(n%10==c)
            imalicifru=1;
        n/=10;
    }
    if (imalicifru==1)
        printf("Uneti broj sadrzi cifru C");
    else
        printf("Uneti broj ne sadrzi cifru c");
    return 0;
}
