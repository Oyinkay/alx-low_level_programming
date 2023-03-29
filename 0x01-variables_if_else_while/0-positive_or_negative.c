#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main:  the program is to print positive and negative numbers
 * srand - the program is to find if a number is positive, negative or zero
 * Return: (0) this means that the code is successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
