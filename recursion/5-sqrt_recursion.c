#include "main.h"
int squareNumber(int x, int n);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the integer number to be scanned
 * Return: return the square root of a number, 0 if n value is 0
 * -1 if n value is less than 0 and 1 if the n value is 1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (squareNumber(2, n));
}

/**
 * squareNumber - function that return the square root of a number
 * @n: the integer to be scanned
 * @x: a integer which tested to be the square root value of n.
 * Return: -1 if x is less than n divided by two,
 * x if x multiply x is equal to n.
 */

int squareNumber(int x, int n)
{
	if (x * x == n)
		return (x);

	if (x > (n / 2))
		return (-1);

	return (squareNumber(x + 1, n));
}
