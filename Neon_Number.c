#include<stdio.h>
int main()
{
    int n,r,s=0,m;
    scanf("%d",&n);
    m=n*n;
    while(m!=0)
    {
        r=m%10;
        s=s+r;
        m=m/10;
        
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}