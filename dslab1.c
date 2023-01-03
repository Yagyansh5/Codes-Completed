#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    x=x-1;
    for(int i=n-1;i>x;i--)
    {
        int t=a[i-1];
        a[i-1]=a[i];
        a[i]=t;
    }
    for(int i=0;i<n-1;i++)
    printf("%d",a[i]);
    

}