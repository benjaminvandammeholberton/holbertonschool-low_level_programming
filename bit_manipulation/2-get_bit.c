#include "main.h"

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
