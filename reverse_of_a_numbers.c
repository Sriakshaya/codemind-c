#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        printf("%d",d);
    }
    return 0;
}