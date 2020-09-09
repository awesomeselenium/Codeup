#include <stdio.h>
#include <math.h>
int main()
{
    int n,a,b; scanf("%d", &n);
    for(a=1;a<=n;a++)
    {
        for(b=0;b<n-a;b++)
        {
            printf(" ");
        }
        printf("*");
        for(b=0; b<(a-1)*2; b++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(a=n; a>0; a--)
    {
        for(b=0;n-a>b;b++)
        {
            printf(" ");
        }
        printf("*");
        for(b=0;b<(a-1)*2;b++)
        {
            printf(" ");
        }
        printf("*\n");
    }
}
