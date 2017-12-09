#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    printf("Unesite petocifren broj: ");
    scanf("%d", &r);
    if(((r/100)%10)==5){
        c = r/10000 + (r/1000)%10 + (r/100)%10 + (r/10)%10 + r%10;
        if(c%3==0)
            printf("\nBroj odgovara");
        else
            printf("\nBroj ne odgovara");
    }
    else
        printf("\nBroj ne odgovara");
    return 0;
}
