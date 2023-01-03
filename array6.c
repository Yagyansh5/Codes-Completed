#include<stdio.h>
int no(int arr[], int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            printf("%d\n",arr[j]);
        }
    }
}
int main()
{
    int arr[8]={1,2,2,4,4,5,5,7
    
    
    };
    no(arr,8);
    return 0;

}