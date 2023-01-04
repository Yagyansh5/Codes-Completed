#include<stdio.h>
void main()
{
    int   b;
    scanf("%d",&b);
while(b/10>0)
{
    int a=b;
    int sum=0;
    while (a>0)
    {
        int n=a%10;
        sum=sum+n;
        a=a/10;
    }
    b=sum;
}
printf("%d",b);
                                       
}
