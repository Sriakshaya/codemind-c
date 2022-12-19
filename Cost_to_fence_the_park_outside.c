#include<stdio.h>
int main()
{
    int l,b,w,c,a,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=(l+2*w)*(b+2*w)-(l*b);
    tc=a*c;
    printf("%d",tc);
}