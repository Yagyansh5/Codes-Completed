#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=i;
        for(j=n;j>i;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        {
        printf("%d",a);
        a++;
        }
        int b=a-1;
        for(j=2;j<=i;j++)
        printf("%d",--b);
        
        printf("\n");
    }

}