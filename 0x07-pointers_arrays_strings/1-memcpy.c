#include "main.h"

/**
 * _memcpy - copies memory area,
 * @dest: destination
 * @src: source
 * @n: bytes filled
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + 1) = *(src + 1);
	return (dest);
}
