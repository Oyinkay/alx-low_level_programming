#include "main.h"

/**
 * main - Entry point
 * Description: functions program
 * Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
