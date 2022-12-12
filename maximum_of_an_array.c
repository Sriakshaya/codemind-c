#include<stdio.h>
int shhh(int n,int i);
int main()
{
    int n,i;
    scanf("%d",&n);
    int x=shhh(n,i);
}
int shhh(int n,int i)
{
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}