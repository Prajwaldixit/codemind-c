#include<stdio.h>
int main()
{
    int n,i,q,r,max=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        if(r>max)
        {
            max=r;
        }
        q=q/10;
    }
    printf("%d",max);
}