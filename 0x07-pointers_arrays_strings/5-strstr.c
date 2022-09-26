#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: substring
 * Return: needle else null
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return (NULL);
}
