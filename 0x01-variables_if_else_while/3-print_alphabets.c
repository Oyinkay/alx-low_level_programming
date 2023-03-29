#include <stdio.h>
/**
 * main - Entry point
 * Description: The program would write alphabets in lower and upper case
 * Return: Always return 0 (success)
*/

int main(void)

{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
	putchar(l);
	for (l = 'A' ; l <= 'Z' ; l++);
	putchar(l);
	putchar('\n');
	return (0)
}
