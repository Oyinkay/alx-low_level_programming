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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
{
	printf("Last digit of %d is", n "and is greater than 5");
}
else if (n == 0)
{
	printf("Last digit of %d is", n "and is 0");
}
	return (0);
}
