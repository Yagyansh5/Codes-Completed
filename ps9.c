#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=1,b=1;
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
    for(i=n-1;i>0;i--)
    {
     int c=1,d=1;
        for(j=n;j>i;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        {
        printf("*",c);
        c--;
        }
        for(j=2;j<=i;j++)
        printf("*",d++);
        printf("\n");
    }
    


}