#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", a, b);
		return;
	}
	towerOfHanoi(n-1, a, c, b);
	printf("\n Move disk %d from rod %c to rod %c", n, a, b);
	towerOfHanoi(n-1, c, b, a);
}

int main()
{
	int n = 4; // Number of disks
	towerOfHanoi(n,'A','B','C');
	return 0;
}
