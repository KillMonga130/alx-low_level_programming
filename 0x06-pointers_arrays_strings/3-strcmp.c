#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: compared string
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, s;

	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
	{
		a++;
	}
	s = s1[a] - s2[a];
	return (s);
}
