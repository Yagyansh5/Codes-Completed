#include <stdio.h>
int rec(int n)
{
    int i,f=0;
    if(n==0)
    return 0;
    else if(n==1)
    return n;
    else
    return (rec(n-1)+rec(n-2));
}
int main()
{
    int n;
    printf("enter no.");
    scanf("%d",&n);
    for(int i = 0;i<n;i++) 
    {
      printf("%d ",rec(i));            
   }
}