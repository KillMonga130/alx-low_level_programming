#include <stdio.h>
#include "main.h"
/**
 * print_array - print the integers in an array
 * @a: pointer of the array
 * @n: number of array elements
 */
void print_array(int *a, int n)
{
	int b;

	b = 0;
	for (n--; n >= 0; n--, b++)
	{
		printf("%d", a[b]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
