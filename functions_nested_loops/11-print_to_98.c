#include <stdio.h>

/**
 * print_to_98- prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: all natural numbers to 98 from this number.
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);
	else if (n > 97)
	{
		for (; n > 97 ; n--)
			printf("%d; ", n);
		putchar('\n');
	}
	else
	{
		for (; n < 99 ; n++)
			printf("%d; ", n);
		putchar('\n');
	}
}
