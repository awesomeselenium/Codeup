#include<stdio.h>
#include<math.h>
int main()
{
    int a,b; scanf("%d %d",&a,&b);
    printf("+");
    for(int i=1;i<=a-2;i++)
    {
        printf("-");
    }
    printf("+\n");
    for(int t=1;t<=b-2;t++)
    {
        printf("|");
        for(int k=1;k<=a-2;k++)
        {
            printf(" ");
        }
        printf("|");
        printf("\n");
    }
    printf("+");
    for(int i=1;i<=a-2;i++)
    {
        printf("-");
    }
    printf("+");
    
}
