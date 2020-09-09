#include<stdio.h>
#include<math.h>

int memo[15][15];
int SuperSum(int k,int n)
{
    if(k==0) return n;
    else if(memo[k][n]) return memo[k][n];
    else
    {
        for(int i = 1; i <= n; i++)
        {
            memo[k][n] += SuperSum(k-1, i);
        }
        return memo[k][n];
    }
}
int main()
{
    int k,n;
    while( scanf("%d %d", &k, &n) != EOF )
	    printf("%d\n", SuperSum(k, n));
}

