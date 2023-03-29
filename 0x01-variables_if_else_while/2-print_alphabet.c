#include <stdio.h>
/**
 * main - Entry point
 * Description: The program is to print alphabet in lower case
 * Return: Always return 0 (success)
*/
char main(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar("\n");

	return (0);
}
