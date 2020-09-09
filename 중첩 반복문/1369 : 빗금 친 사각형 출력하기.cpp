#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if (i==1||i==a||j==1||j==a)
                printf("*");
            else if ((i+j-1)%b==0)
                printf("*");
            else
                printf(" ");
        }
            printf("\n");
    }
}

