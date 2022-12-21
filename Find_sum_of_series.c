#include<stdio.h>
int main()
{
    int n;
    double i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("%0.2f",sum);
}