#include <stdio.h>
#include <math.h>
int main()
{
    int a=0,b=0,i=0,j=0,k=0;
    scanf("%d %d",&a,&b);
    for(i = 0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            for(k = 0;k<j;k++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        for(j=a-2;j>=0;j--)
        {
            for(k = 0;k<j;k++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
    }
}

