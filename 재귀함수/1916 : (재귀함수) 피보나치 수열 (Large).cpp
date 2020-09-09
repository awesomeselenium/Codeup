#include<stdio.h>
int arr[200],chk,a;
int fib()
{
    if(chk==a)
            return 0;
    if(chk<=a)
    {
            chk++;
            arr[chk+2]=(arr[chk]+arr[chk+1])%10009;
            fib();
    }
}
int main()
{
    scanf("%d",&a);
    arr[1]=1;arr[2]=1;arr[3]=2; fib();
    printf("%d",arr[a]);
}
