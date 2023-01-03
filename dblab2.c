#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        int min=a[i];
        for(int j=i;j<=n-1;j++)
        {
            if(a[j+1]>min)
            {
                t=a[j+1];
                a[j+1]=min;
                min=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("%d",a[i]);
}