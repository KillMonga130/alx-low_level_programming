#include "main.h"

/**
 * print_diagonal - prints digonal line based on the value passed
 * @n: the length of the line
 * Return: line
 */

void print_diagonal(int n)
{
	int i = 0, c;

	while (i < n && n > 0)
	{
		c = 0;
		while (c < i)
		{
			_putchar(' ');
			c++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
