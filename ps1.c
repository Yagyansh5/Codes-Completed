#include<stdio.h>
int main()
{
    int a;
    for(int i=1;i<=4;i++)
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