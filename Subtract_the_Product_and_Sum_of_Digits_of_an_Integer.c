#include<stdio.h>
int main()
{
    int n,d,sum=0,mul=1,res;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        sum+=d;
        mul*=d;
        n=n/10;
    }
    res=mul-sum;
    printf("%d",res);
    return 0;
}
