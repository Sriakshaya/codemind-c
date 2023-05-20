#include<stdio.h>
int main()
{
    int n,d,r1=0,r2=0,r3=0,r4=0,d1;
    scanf("%d",&n);
    r1=n*n;
    while(n)
    {
        d=n%10;
        r2=r2*10+d;
        n=n/10;
    }
    r3=r2*r2;
    while(r3)
    {
        d1=r3%10;
        r4=r4*10+d1;
        r3=r3/10;
    }
    if(r1==r4)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}