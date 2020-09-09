#include<stdio.h>
#include<math.h>
int main(void)
{
    char a[50001];
    int i,j=0;
    scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='(')
                j++;
            else if(a[i]==')')
                j--;
            if(j<0) 
            {
                printf("bad");
                break;
            }
        }
    if(j==0)
        printf("good");
    else if(j>0)printf("bad");
}

