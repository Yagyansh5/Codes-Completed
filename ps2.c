#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=i;
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
}