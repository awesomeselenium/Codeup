#include<stdio.h>
#include<math.h>
int a,chk=1,m1,m2; int arr[999];

int fib()
{
        if(chk==a)
            printf("%d",arr[chk]);
        if(chk<=a)
        {
            chk++;
            arr[chk+2]=arr[chk]+arr[chk+1];
            fib();
        }
}

int main()
{
    arr[1]=1;arr[2]=1;arr[3]=2;arr[4]=3;arr[5]=5;
    scanf("%d",&a);
    fib();
}
