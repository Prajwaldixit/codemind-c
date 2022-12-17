#include<stdio.h>
int main()
{
    int d;
    scanf("%d",&d);
    if(d==1)
    {
        printf("monday");
    }
    else if(d==2)
    {
        printf("tuesday");
    }
    else if(d==3)
    {
        printf("Wednesday");
    }
    else if(d==4)
    {
        printf("Thrusday");
    }
    else if(d==5)
    {
        printf("friday");
    }
    else if(d==6)
    {
        printf("Sutarday");
    }
    else if(d==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("invalid input");
    }
}