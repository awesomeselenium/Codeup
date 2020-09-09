#include<stdio.h>
int arr[28][28],arrprime[28][28];
int sum(int i,int j)
{
    int sum=arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i][j-1]+arr[i][j+1]+arr[i+1][j-1]+arr[i+1][j+1]+arr[i+1][j];
    return sum;
}
int main()
{
    for(int i=1;i<26;i++)
        for(int j=1;j<26;j++)
            scanf("%d",&arr[i][j]);
    for(int i=0;i<28;i++)
        for(int j=0;j<28;j++)
            arrprime[i][j]=arr[i][j];
    for(int i=1;i<26;i++)
    {
        for(int j=1;j<26;j++)
        {
            if(arr[i][j]==0)    
                if(sum(i,j)==3)
                    arrprime[i][j]=1;
            if(arr[i][j]==1)
            {
                if(sum(i,j)>=4||sum(i,j)<=1)
                    arrprime[i][j]=0;
                if(sum(i,j)==2||sum(i,j)==3)
                    arrprime[i][j]=1;
            }
        }
    }
    for(int i=1;i<26;i++)
    {
        for(int j=1;j<26;j++)
            printf("%d ",arrprime[i][j]);
        puts("");
    }
}
