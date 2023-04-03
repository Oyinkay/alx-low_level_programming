#include <stdio.h>
/**
 * main - Entry point
 * Desrciption: Print combination of three numbers
 * Return: Always 0 (success)
*/

int main(void)
{
	int k;
	int o;
	int l;

	for (k = 0; k < 10; k++)
	{
		for (o = 1; o < 10; o++)
		{
			for (l = 2; l < 10; l++)
				if (k < o && k < l && o < l && k != o && k != l && o != l)
				{
					putchar(k + '0');
					putchar(o + 'o');
					putchar(l + '0');
					if (k + o + l != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n')
	return (0);
}
