#include<stdio.h>
int multiply(int *arr, int n)
{
    // Complete the function
    int i,mid,sum1=0,sum2=0,result;
    mid=n/2;
    
    for(i=0;i<n;i++)
    {
        if(i<=mid)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
      
    }
    // printf("%d\n",sum1);
    // printf("%d\n",sum2);
    result=sum1*sum2;
    
    return result;
    
}

int main()
{ int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++)
            scanf("%d",&arr[j]);
        printf("%d\n",multiply(arr,n));
    }

}