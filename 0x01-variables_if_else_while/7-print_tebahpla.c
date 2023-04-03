#include <stdio.h>

/**
 * main - Entry point
 * Description: The program writes alphabet in reverse move
 * return - always 0 (successful)
*/

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
