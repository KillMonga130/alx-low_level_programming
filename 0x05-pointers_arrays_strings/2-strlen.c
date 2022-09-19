#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: pointer to hold the string to be counted
 * Return: length of tyhe given string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
