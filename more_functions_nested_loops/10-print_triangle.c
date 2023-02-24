#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int n = 1;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				if (j < (size - n))
					_putchar (' ');
				else
					_putchar ('#');
			}
			n++;
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}
