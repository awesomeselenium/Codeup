#include <stdio.h>
 
int print(int f,int k,int n)
{
    if (f!=n)
    {
        if (f<=k)
            printf("*");
        print(f+1,k,n);
    }
}
void nextline(int k, int n)
{
    if(k!=n)
    {
        print(0, k, n);
        printf("\n");
        nextline(k + 1, n);
    }
}
int main()
{
    int n;scanf("%d",&n);nextline(0,n);
}
