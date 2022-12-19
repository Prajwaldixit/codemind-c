#include<stdio.h>
int main()
{
    int n,q,rev=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rev=rev*10+q%10;
        q=q/10;
    }
    if(rev==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}