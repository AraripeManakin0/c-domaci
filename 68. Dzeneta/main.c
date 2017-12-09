#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,ap=2,app=1;

    printf("%d, %d",app,ap);

    for(i=3;i<=20;i++)
    {
        a=3*ap-2*app;
        printf(", %d",a);
        app=ap;
        ap=a;
    }
    return 0;
}
