#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: a square matrix.
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
	{
		sum1 = sum1 + a[i];
	}
	for (j = size - 1; j < size * size - 1; j = j + (size - 1))
	{
		sum2 = sum2 + a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
