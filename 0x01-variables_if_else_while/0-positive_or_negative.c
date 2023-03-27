#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * the program is to print positive and negative numbers
 * Return: (0) this means that the code is successful

 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		print("%d is negative\n\n", n);
	}
	else if (n == 0)
	{
		print("%d is zero\n\n", n);
	}
	else
	{
		print("%d is positive\n\n", n);
	}
	return (0);
}
