#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: adress to the number that will be changed
 * @index: index of the bit wanted to set
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 20)
		return (-1);

	if (get_bit(*n, index) == 1)
		*n  = *n ^ (1 << index);
	return (1);
}

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number checked
 * @index: index of the bit wanted to get
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitStatus;

	bitStatus = (n >> index) & 1;
	if (index > 20)
		return (-1);

	return (bitStatus);
}
