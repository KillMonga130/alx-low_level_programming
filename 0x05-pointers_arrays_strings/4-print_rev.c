#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int reverse = 0;

	while (s[reverse])
		reverse++;

	while (reverse--)
	{
		_putchar(s[reverse]);
	}

	_putchar('\n');
}
