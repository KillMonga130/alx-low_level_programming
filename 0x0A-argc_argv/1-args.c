#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = 1;
		i++;
	}
	printf("%d\n", i);

	return (0);
}
