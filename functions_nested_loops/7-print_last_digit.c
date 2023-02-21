#include "main.h"
/**
 * print_last_digit- prints the last digit of a number.
 * @c: nu,number checked.
 * Return: the last digit of c.
 */

int print_last_digit(int c)
{
	if  (c < 0)
	{
		_putchar((-1 * (c % 10)) + '0');
		return (-1 * (c % 10));
	}
	else
		_putchar((c % 10) + '0');
	return (c % 10);
}
