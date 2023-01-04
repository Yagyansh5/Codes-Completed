#include <stdio.h>
int rec(int a,int b)
{
    int i,f=0;
    if(b!=0)
    return rec(b, a % b);
    else
    return a;
}
int main()
{
    int a,b;
    printf("enter no.");
    scanf("%d%d",&a,&b);
    int fac=rec(a,b);
    printf("%d",fac);
}