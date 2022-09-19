#include "main.h"

/**
 * swap_int - swaps the values between variable a and b
 * @a: pointer value to be passed
 * @b: pointer value to be passed
 * Retun: swaps
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
