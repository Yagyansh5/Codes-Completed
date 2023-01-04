#include <stdio.h>
int rec(int n,int a)
{
    int i,f=0;
    if(a==1)
    return n;
    else if(a==0)
    return 1;
    else
    return (n*rec(n,a-1));
}
int main()
{
    int n,a;
    printf("enter no.");
    scanf("%d%d",&n,&a);
    int fac=rec(n,a);
    printf("%d",fac);
}