#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            a=a*j;
        }
        sum=sum+a;
    }
    printf("%d ",sum);
}
