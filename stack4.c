#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int isEmpty(int top, int stack_arr[]);
char push(int x, int *top, int stack_arr[]);
char pop(int *top, int stack_arr[]);
void DecToBin(int num);

int main()
{
        int num;
        printf("Enter an integer : ");
        scanf("%d",&num);
        printf("Binary Equivalent is : ");
        DecToBin(num);

        return 0;

}

void DecToBin(int num)
{
        int stack[MAX], top=-1, rem;
        while(num!=0)
        {
                rem = num%16;
                if(rem>9)
                {
                    char  c=(char)rem+55;
                }
                else
                {}
                push(rem, &top, stack);
                num/=16;
        }
        while(top!=-1)
                printf("%d", pop(&top, stack));
        printf("\n");
}


char push(int x, int *top, int stack_arr[])
{
        if(*top == (MAX-1))
                printf("Stack Overflow\n");
        else
        {
                *top=*top+1;
                stack_arr[*top] = (char)x;
        }
}

char pop(int *top, int stack_arr[])
{
        int x;
        if(*top == -1)
        {
                printf("Stack Underflow\n");
                exit(1);
        }
        else
        {
                x = stack_arr[*top];
                *top=*top-1;
        }
        return x;
}