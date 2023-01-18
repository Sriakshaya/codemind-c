#include<stdio.h>
int main()
{
    int BS,DA,HRA;
    float GS;
    scanf("%d",&BS);
    if (BS<=10000)
    {
        DA=0.8*BS;
        HRA=0.2*BS;
    }
    else if (BS>10000 && BS<=20000)
    {
        DA=0.9*BS;
        HRA=0.25*BS;
    }
    else
    {
        DA=0.95*BS;
        HRA=0.3*BS;
    }
    GS=BS+DA+HRA;
    printf("%0.2f",GS);
}