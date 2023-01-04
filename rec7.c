#include<stdio.h>
int rev(int a)
{int n=0,sum=0;
    while (a>0)
    {
        n=a%10;
        sum=sum*10+n;
        a=a/10;
    }
    return sum;                                     
}
int main()
{
    int a;
    printf("enter any number");
    scanf("%d",&a);
    int t=rev(a);
    printf("reverse of no. is %d",t);
}