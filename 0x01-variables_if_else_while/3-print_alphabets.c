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

	for (l = 'a' ; l <= 'z' ; l++);
	putchar(l);
	for (u = 'A' ; u <= 'Z' ; u++);
	putchar(u);
	putchar('\n');
	return (0);
}
