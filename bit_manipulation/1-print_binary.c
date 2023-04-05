#include "main.h"
#include <limits.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number that should be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 549755813888;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 1)
			_putchar('0');
		else if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		mask = mask >> 1;
	}
}
