#include <stdio.h>
int rec(int n)
{
    int i,f=0;
    if(n==1)
    return 1;
    else
    return (n*rec(n-1));
}
int main()
{
    int n;
    printf("enter no.");
    scanf("%d",&n);
    int fac=rec(n);
    printf("%d",fac);
}