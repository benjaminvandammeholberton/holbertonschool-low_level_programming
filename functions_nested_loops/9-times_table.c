#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i;
	int x;
	int y;
	int j;

	for (j = 0 ; j <= 9 ; j++)
	{
		for (i = 0 ; i <= 9 ; i++)
		{
			y = (i * x);
			if (i < 9 && y < 10)
			{
				_putchar (' ');
				_putchar ((y % 10) + '0');
				_putchar (',');
				_putchar (' ');
			}
			else if (i < 9)
			{
				_putchar ((y / 10) + '0');
				_putchar ((y % 10) + '0');
				_putchar (',');
				_putchar (' ');
			}
			else
			{
				_putchar ((y / 10) + '0');
				_putchar ((y % 10) + '0');
			}
		}
		x++;
		_putchar ('\n');
	}
}
