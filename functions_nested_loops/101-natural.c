# include "stdio.h"

/**
 * main - program that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	int n;

	while (n < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			n = n + i;
		i++;
	}

	printf("%d\n", n);
	return (0);
}
