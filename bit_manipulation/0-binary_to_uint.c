#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value of
 * x raised to the power of y.
 * @x: the value  of an integer.
 * @y: the value of the power.
 * Return: an int, the value of x rqised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: the converted number, 0 of there is chars in b that is not 0 or 1 or
 * if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int len = 0;
	unsigned int result = 0;
	int power = 0;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != 0)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		len++;
		i++;
	}
	power = len;
	for (i = 0; i < len; i++)
	{
		result = result + ((b[i] - '0') * _pow_recursion(2, power - 1));
		power = power - 1;
	}
	return (result);
}
