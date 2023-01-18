
#include<stdio.h>
int main()
{
    int i,n,q,r,wt=1,s=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        for(i=1;i<=r;i++)
        {
            wt*=i;
        }
        s+=wt;
        wt=1;
        q/=10;
    }
    if(s==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}