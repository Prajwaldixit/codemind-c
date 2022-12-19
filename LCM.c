#include<stdio.h>
int main()
{
    int max,a,b;
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            printf("%d",max);
            break;
        }
        max++;
        
    }
}