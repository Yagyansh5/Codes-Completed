#include<stdio.h>
int main()
{
    char s[100];
    int n;
    printf("enter string");
    gets(s);
    n=mystrlen(s);
    printf("%d",n);

    return 0;
}
int mystrlen(char s[100])
{
    int i,n=0;
    for(i=0;s[i]!='\0';i++)
    n++;
    return(n);
}