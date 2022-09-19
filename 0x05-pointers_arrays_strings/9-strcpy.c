#include "main.h"

/**
 * *_strcpy - dopies the string pointed to by src
 * @dest: dest pointer
 * @src: src pointer
 * Return: the pointer of dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');
	return (dest);
}
