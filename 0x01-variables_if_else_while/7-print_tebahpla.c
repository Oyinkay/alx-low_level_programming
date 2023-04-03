#include <stdio.h>

/**
 * main - Entry point
 * Description: The program writes alphabet in reverse move
 * return - always positive 0 (successful)
*/

int main(void)
{
	char i;

	for (i = 'z' ; i <= 'a' ; i--)
		putchar(i);
	putchar('\n');
}
