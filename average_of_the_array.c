#include<stdio.h>
void ar(int n,int i);
int main()
{
    int n,i;
    scanf("%d",&n);
    ar(n,i);
}
void ar(int n,int i)
{
    float sum=0,avg;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%0.2f",avg);
}