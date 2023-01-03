#include<stdio.h>
int main()
{
    int x,n,i,sum=1;
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            a=a*j;
        }
        sum+=(pow(x,i)/a);
    }
    printf("%d ",sum);
}
