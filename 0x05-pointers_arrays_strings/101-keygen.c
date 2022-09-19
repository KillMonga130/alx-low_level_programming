#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - prints random password keys which must sum 2772
 * Return: (0) Success
 */

int main(void)
{
	char pick;
	char comb[] = "abcdefghijklmnokpqrstuvwxyzABCDEFGHIGKLMNOPQRSTUVWXYZ";
	int i, randnum, sum = 2772;

	srand(time(NULL));
	for (i = 0; sum > 200; i++)
	{
		randnum = rand() % (sizeof(comb) - 1);
		pick = comb[randnum];
		putchar(pick);
		sum -= pick;
	}

	if (sum > 122)
	{
		putchar(sum / 2);
		putchar((sum / 2) + (sum % 2));
	}
	else
		putchar(sum);

	return (0);
}
