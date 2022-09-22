#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: pointer parameter
 * @n: integer parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, tp;

	while (i < j)
	{
		tp = a[i];
		a[i] = a[j];
		a[j] = tp;
		i++;
		j--;
	}
}
