// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n,a;
//     printf("enter size of array");
//     scanf("%d",&n);

//     printf("enter array elements");
//     a=pow(2,n);
//     printf("the power set og given set is %d",a);

// }
#include <stdio.h>
#include <math.h>

void printPowerSet(char *set, int n)
{
	int a = pow(2,n);
	int i, j;

	
	for(i = 0; i < a; i++)
	{
	for(j = 0; j < n; j++)
	{
		if(i & (1<<j))
			printf("%c", set[j]);
	}
	printf("\n");
	}
}
int main()
{
	char set[] = {'a','b','c'};
	printPowerSet(set, 3);
	return 0;
}