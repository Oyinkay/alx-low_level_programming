#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: The code is to assign random variable when executed
 * Return: Always return 0 (succes)
 */

int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if (n > 5)
{
	printf("Last digit of %d is %d  and is greater than 5", n, m);
}
else if (n == 0)
{
	printf("Last digit of %d is %d and is 0", n, m);
}
	return (0);
}
