#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0 (Always success)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int i;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 2 ; i < 50 ; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i < 49)
			printf("%ld, ", c);
		else
			printf("%ld", c);
	}
	printf("\n");
	return (0);
}
