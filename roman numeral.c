#include<stdio.h>

int roman(char n)
{
    if( n=='I')
        return 1;
    if (n=='V')
        return 5;
    if (n=='X')
        return 10;
    if (n=='L')
        return 50;
    if (n=='C')
        return 100;
    if (n=='D')
        return 500;
    if (n=='M')
        return 1000;
}
int main()
{
    char a[20];
    int i,count=0;
    printf("Enter the roman number");
    gets(a);
     int b=0;
     
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='I'&&a[i+1]=='V'){
            b=b+4;
            i++;
        }
        else if(a[i]=='I'&&a[i+1]=='X'){
            b=b+9;
            i++;}
        else if(a[i]=='X'&&a[i+1]=='L'){
            b=b+40;
            i++;}
        else if(a[i]=='X'&&a[i+1]=='C'){
            b=b+90;
            i++;}
        else if(a[i]=='C'&&a[i+1]=='D'){
            b=b+400;
            i++;}
        else if(a[i]=='C'&&a[i+1]=='M'){
            b=b+900;
            i++;}
        else
            b=b+roman(a[i]);
            
    }
    printf("%d",b);

}