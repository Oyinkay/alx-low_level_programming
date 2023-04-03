#include <stdio.h>
/**
 * main - Entry point
 * Description: prints combination of numbers
 * Return: Always 0 (success)
*/

int main(void)
{
	int o;
	int k;

	for (o = 0; o <= 10; o++)
	{
		for (k =1; k < 10; k++)
		{
			if (o < k && o != k)
			{
				putchar(o + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
