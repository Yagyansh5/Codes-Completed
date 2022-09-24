#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=i,b=2;
        for(j=n;j>i;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        {
        printf("*",a);
        a--;
        }
        for(j=2;j<=i;j++)
        printf("*",b++);
        printf("\n");
    }

}