#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            if(i==n || j==n||i==1||j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("
");
    }
}