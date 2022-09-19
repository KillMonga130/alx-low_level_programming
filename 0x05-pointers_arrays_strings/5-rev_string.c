#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int a, b, c;
	char sub;

	for (b = 0; s[b] != '\0'; b++)
		;
	a = 0;

	c = b / 2;

	while (c--)
	{
		sub = s[b - a - 1];
		s[b - a - 1] = s[a];
		s[a] = sub;
		a++;
	}
}
