#include<stdio.h>
int main()
{
    int cap,s,t,b,tc;
    scanf("%d%d%d",&s,&t,&b);
    cap=2*s*t*b*512;
    tc=cap/1024;
    printf("%dKB",tc);
}