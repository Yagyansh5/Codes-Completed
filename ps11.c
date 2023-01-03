#include<stdio.h>
int main()
{
    for(int i=6;i>=1;i--)
    { int k=1;
        for(int j=1;j<=11;j++)
       {if(j>=5+i||j<=7-i) 
       {printf("%d",k);
        if(j<6)
        k++;
        else
        k--;
       }
       else
       {
        printf(" ");
        if(j==6)
        k--;
       }
       }
       printf("\n");
    }
}