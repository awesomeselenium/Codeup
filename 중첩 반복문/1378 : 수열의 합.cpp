#include<stdio.h>
#include<math.h>
int main()
{
    float a;scanf("%f",&a);
    a=a*(a+1)*(2*a+1)/12 + a*(a+1)/4;
    printf("%.0f",a);
}
