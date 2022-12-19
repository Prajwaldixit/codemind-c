#include<stdio.h>
int main()
{
    int n,q,rev=0,r;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rev=rev*10+q%10;
        q=q/10;
    }
    printf("%d",rev);
}