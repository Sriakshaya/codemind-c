#include<stdio.h>
int pr(int n,int i,int fc );
int main()
{
    int n,i,fc=0;
    scanf("%d",&n);
    int x=pr(n,i,fc);
}
int pr(int n,int i,int fc )
{
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            fc=fc+1;
        }
    }
    if (fc==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}
