#include<stdio.h>
int main()
{
    int fir=0,sec=1,next=0,num;
    scanf("%d",&num);
    while(num>next)
    {
        next=fir+sec;
        fir=sec;
        sec=next;
    }
    if(num-fir<sec-num)
    {
        printf("%d",fir);
    }
    else if(num-fir==sec-num)
    {
        printf("%d %d",fir,sec);
    }
    else
    {
        printf("%d",sec);
    }
}