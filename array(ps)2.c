int maxDays(int arr[],int n)
    {
        // code here      
    int i;
    int y=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>y)
        y=arr[i];
    }
    
    return(y);
    }