#include<stdio.h>
int main()
{
    float n,b,s;
    scanf("%f",&n);
    if(n<200)b=1.2*n;
    else if(n<400)b=1.5*n;
    else if(n<600)b=1.8*n;
    else b=2*n;
    if(b>400)s=0.15*b;
    else s=100;
    printf("%0.2f",b+s);
}