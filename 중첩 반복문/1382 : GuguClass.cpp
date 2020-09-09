#include <stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=9;a++)
    {
        for(b=2;b<=5;b++)
        {
            printf("%d x %d = %2d",b,a,b*a);
            if (b!=5) printf("\t");
            else puts("");
        }
   }
}
