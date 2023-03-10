#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int a, b, x;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			x = a * b;

			if (x >= 10)
			{
				_putchar((x / 10) + 48);
			}
			if (x < 10 && b > 0)
			{
				_putchar(32);
			}
			_putchar((x % 10) + 48);
			if (b < 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}
