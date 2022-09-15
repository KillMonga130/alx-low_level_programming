#include "main.h"

/**
 * print_line - print line based on the value passed
 * @n: how long the line is
 * Return: line
 */

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
