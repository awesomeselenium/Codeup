#include<stdio.h>
#include<math.h>
int memo[500],arr[500];
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int str(int k)
{
	if(k < 1)
	    return 0;
	if(memo[k])
	    return memo[k];
	if(k==1)
        return memo[1]=arr[1];
	if(k==2)
	    return memo[2]=arr[1]+arr[2];
	return memo[k] = max(str(k-3)+arr[k-1],str(k-2))+arr[k];
}

int main () 
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
		scanf("%d", &arr[i]);
	printf("%d", str(n));
}
