#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: input string
 * @accept: string we search
 * Return: s else null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + j);
			j++;
		}
		i++;
	}
	return ('\0');
}
