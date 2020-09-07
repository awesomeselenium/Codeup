#include<stdio.h>
int arr[1001][173][173];
int sum(int t,int i,int j)
{
    int sum=arr[t][i-1][j-1]+arr[t][i-1][j]+arr[t][i-1][j+1]+arr[t][i][j-1]+arr[t][i][j+1]+arr[t][i+1][j-1]+arr[t][i+1][j+1]+arr[t][i+1][j];
    return sum;
}
int main()
{
   int a,b,x,y,z,k;scanf("%d %d %d %d %d",&a,&b,&x,&y,&z);
   for(int i=1;i<a+1;i++)
        for(int j=1;j<b+1;j++)
            scanf("%d",&arr[0][i][j]);
    scanf("%d",&k);
    for(int t=0;t<=k;t++)
    {
        for(int i=1;i<a+1;i++)
        {
            for(int j=1;j<b+1;j++)
            {
                int q=sum(t,i,j);
                if(arr[t][i][j]==0) // 생명탄생조건
                {
                    if(q==x)
                        arr[t+1][i][j]=1;
                    else if(q!=x)
                        arr[t+1][i][j]=0;
                }
                if(arr[t][i][j]==1)
                {
                    if(q>=y&&q<z) //(0사y생z사)
                        arr[t+1][i][j]=1;
                    if(q<y||q>=z)
                        arr[t+1][i][j]=0;
                }
            }
        }
    }
    for(int i=1;i<a+1;i++)
    {
        for(int j=1;j<b+1;j++)
            printf("%d ",arr[k][i][j]);//k세대의 배열출력
        puts("");
    }
}
    
