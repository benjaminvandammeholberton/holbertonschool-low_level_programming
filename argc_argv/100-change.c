#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - program that prints the minimum number of coins
* to make change for an amount of money.
* @argc: The arguements' counter
* @argv: The argument's values
* Return: 0 if success, 1 otherwise
*/

int main(int argc, char **argv)
{

	int n = 0;
	int r = 0;
	int c = 0;

	if (argc == 2)
	{
		n = atoi(argv[1]);

		if (n < 0)
		{
			printf("%d\n", c);
			return (0);
		}

		c = n / 25;
		r = n % 25;

		c = c + r / 10;
		r = r % 10;
		if (r == 0)

		c = c + r / 5;
		r = r % 5;

		c = c + r / 2;
		r = r % 2;

		c = c + r;

		printf("%d\n", c);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
