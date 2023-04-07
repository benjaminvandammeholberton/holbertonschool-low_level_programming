#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed to flip
 * from one number to another
 * @n: first number to compare
 * @m: second number to compare
 * Return: The number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	int i;
	int count = 0;

	temp = (n ^ m);

	for (i = 0; i < 64; i++)
	{
		if ((temp & (1 << i)) != 0)
			count++;
	}
	return (count);
}
