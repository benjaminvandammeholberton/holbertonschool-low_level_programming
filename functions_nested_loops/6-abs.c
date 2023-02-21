/**
 * _abs- computes the absolute value of an integer.
 *@c: number to check
 *Return: c for positive numbers and 0 or (c - 2 * c) for negative numbers
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c - 2 * c);
}
