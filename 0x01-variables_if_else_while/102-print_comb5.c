#include <stdio.h>
/**
 * main - Entry point
 * Description: Print number combination from 0 - 99
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
			}
	}
	putchar('\n');
	return (0);
}
