#include<stdio.h>
void suu(int i,int n,int sum);
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    suu(i,n,sum);
}
void suu(int i,int n,int sum)
{
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }    
    printf("%d",sum);
}
