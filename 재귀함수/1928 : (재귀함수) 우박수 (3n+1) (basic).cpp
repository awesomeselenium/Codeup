#include<stdio.h>
#include<math.h>
int n;
int woobaksu()
{
    if(n==1)
    {
    }   
    else if(n%2!=0)
    {
        n=3*n+1;
        printf("%d\n",n);
        woobaksu();
    }
    else if(n%2==0)
    {
        n=n/2;
        printf("%d\n",n);
        woobaksu();
    }

}
int main()
{
    scanf("%d",&n);
    printf("%d\n",n);
    woobaksu();
}
