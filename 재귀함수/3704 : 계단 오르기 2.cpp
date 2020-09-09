#include<stdio.h>
#include<math.h>
int memo[1000000];
int cnt(int n)
{
    if(n<0)
    {
        return 0;
    } 
    else if(n==0)
    {
        return 1;
    }
    else
    {
        if(!memo[n])
            memo[n]=(cnt(n-1)+cnt(n-2)+cnt(n-3))%1000;
        return memo[n];
    }
}
int main()
{
    int n;
    int result;
    scanf("%d", &n);
    printf("%d\n",cnt(n));
}

