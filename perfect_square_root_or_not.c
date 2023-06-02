#include<stdio.h>
int main()
{
    int n,i,a=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            a=1;
            break;
        }
    }
    if(a==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}