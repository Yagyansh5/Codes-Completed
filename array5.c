#include<stdio.h>
int no(int arr[], int size){
    int i,sum=0,n=size+1;
    for(i=0;i<size;i++)
        sum=sum+arr[i];
    sum=n*(n+1)/2-sum;
    return sum;
}
int main()
{
    int arr[7]= {1,2,4,5,6,7,8};
    printf("missing number is %d",no(arr,7));
    return 0;
}