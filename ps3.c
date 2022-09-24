#include<stdio.h>
int main()
{
    for(char i='A';i<='C';i++)
    {
        for(char j='A';j<=i;j++)
        {
            printf("%c",i);
            
        }
        printf("\n");
    }
}