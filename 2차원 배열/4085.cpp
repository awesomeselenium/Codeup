#include<stdio.h>
#include<math.h>
int m,n,x,y,max,sum[500][500];int arr[200][200];
int main()
{
    scanf("%d %d %d %d",&m,&n,&x,&y); 
    for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++)
            scanf("%d",&arr[i][j]); //배열 입력받기
    for(int i=1;i<n;i++) //세로줄
        for(int j=1;j<m;j++) //가로줄
        {
            for(int sero=i;sero<i+y;sero++)//세로줄에서 i부터 i+y까지
                for(int garo=j;garo<j+x;garo++)//가로줄에서 j부터 j+x까지 합 구해서 sum[i]배열에 저장
                    sum[i][j]+=arr[sero][garo];
            if(max<sum[i][j])
                max=sum[i][j];
        }
    printf("%d",max);
        
}
