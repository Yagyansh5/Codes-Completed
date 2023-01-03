#include<stdio.h>
void main()
{
    int m,n,i,j,SYM=1;
    printf("enter the size of matrix");
    scanf("%d%d", &m,&n);
    printf("enter the matrix\n");
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    int b[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j] = a[j][i];
        }
        
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j] != b[i][j])
            SYM=0;
            break;
        }
        
    }
    if(SYM==1)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t", &a[i][j]);
            }
            printf("\n");
        
        }
        printf("the matrix is symmetric\n");
    }    
    else  
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t", &a[i][j]);
            }
            printf("\n");
        
        }
        printf("the matrix is not symmetric\n");
    }     
}