#include<stdio.h>
int main()
{
    int n,i,sum=0,nsum=0,p,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i);
        nsum=nsum+i;
        p=nsum*nsum;
        d=p-sum;
    }
    printf("%d",d);
}