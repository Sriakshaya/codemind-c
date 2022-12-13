#include<stdio.h>
int od(int n,int i,int sum);
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int x=od(n,i,sum);
}
int od(int n,int i,int sum)
{
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}