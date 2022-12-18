#include<stdio.h>
int lc(int a,int b,int m,int i);
int main()
{
    int a,b,m,i;
    scanf("%d%d",&a,&b);
    int x=lc(a,b,m,i);
}
int lc(int a,int b,int m,int i)
{
    if(a>b)
    {
        m=a;
    }
    else
    {
        m=b;
    }
    for(i=m;i>=0;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}