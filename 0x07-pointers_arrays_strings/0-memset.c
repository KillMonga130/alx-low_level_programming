#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: mmemory area to be fillled
 * @b: char to fill the memory
 * @n: number to fill memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
