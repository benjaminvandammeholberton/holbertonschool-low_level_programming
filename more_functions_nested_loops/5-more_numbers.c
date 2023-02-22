#include "main.h"
/**
 * more_numbers- prints 10 times the numbers, from 0 to 14,
 * followed by a new line. - check the code
 */

void more_numbers(void)
{
	int n;
	int i;

	for (i = 0 ; i < 11 ; i++)
	{
		for (n = 0 ; n < 15 ; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
