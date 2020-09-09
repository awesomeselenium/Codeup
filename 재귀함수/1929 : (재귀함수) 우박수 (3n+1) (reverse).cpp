#include<stdio.h>
#include<math.h>
int n,chk;int arr[99999]; int cnt;
void woobaksu()
{
    if(n==1)
    {
    }   
    else if(n%2!=0)
    {
        n=3*n+1;
        arr[chk++]=n;
        woobaksu();
    }
    else if(n%2==0)
    {
        n=n/2;
        arr[chk++]=n;
        woobaksu();
    }
}
void printarr()
{
  if(cnt>=0)
  {
    printf("%d\n",arr[cnt--]);
    printarr();
  }
}
int main()
{
    scanf("%d",&n); int k=n;
    woobaksu();cnt=chk-1;printarr();
    printf("%d\n",k);
}

