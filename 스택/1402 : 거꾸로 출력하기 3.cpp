#include<stdio.h>
#include<math.h>
int main()
{
    int n;scanf("%d",&n);
    char arr[n];
    for(int i=0;i<=n-1;i++)
        scanf("%d",&arr[i]);
    for(int t=n-1;t>=0;t--)
        printf("%d ",arr[t]);
}
