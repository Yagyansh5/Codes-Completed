#include<stdio.h>
int main()
{   char a;
    for(char i='A';i<='D';i++)
    {a=i;
        for(char j='A';j<=i;j++)
        {
            printf("%c",a);
            a++;
            
        }
        printf("\n");
    }
}