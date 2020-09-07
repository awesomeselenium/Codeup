#include<stdio.h>
#include<math.h>
int arr[11][11],chk[11],horse[11];
int main()
{
    for(int i=1;i<11;i++)
        for(int j=1;j<11;j++)
            scanf("%d",&arr[i][j]);
    for(int i=1;i<11;i++)
        scanf("%d",&horse[i]);
    for(int i=1;i<11;i++)
    {
        for(int j=1;j<11;j++)
        {
            if(horse[j]==1)
            {
                for(int k=1;k<11;k++)
                {
                    if(arr[k][j]>0)
                        chk[j]=1;
                    if(arr[k][j]<0)
                        chk[j]=-1;
                }
            }
        }
    }
    for(int i=1;i<11;i++)
    {
        if(horse[i]==1)
        {
            if(chk[i]==1)
                printf("%d crash\n",i);
            if(chk[i]==-1)
                printf("%d fall\n",i);
            if(chk[i]==0)
                printf("%d safe\n",i);
        }
    }
}
