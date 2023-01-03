int chocolates(int arr[], int l, int r) {
    int i;
    int y=arr[0];
    for(i=0;i<=r;i++)
    {
        if(arr[i]<y)
        y=arr[i];
    }
    return(y);
    