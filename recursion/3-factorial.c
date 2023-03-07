#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: A given number
 * Return: an int, the factorial of the given number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
