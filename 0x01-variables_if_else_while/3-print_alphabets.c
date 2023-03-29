#include <stdio.h>
/**
 * main - Entry point
 * Description: The program would write alphabets in lower and upper case
 * Return: Always return 0 (success)
*/

int main(void)

{
	char l;
	char u;

	for (l = 'a' ; l <= 'z' ; ++l; u = 'A' ; u <= 'Z' ; ++u);
	putchar(l);
	putchar(u);
	putchar('\n');
	return (0)
}
