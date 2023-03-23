#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that performs simple operations.
  * @argc: number of argument
  * @argv: arguments
  * Return: always 0 (success)
  */

int main(int argc, char **argv)
{
	int num1;
	int num2;
	char *operator;
	int calc = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] != '+') && (*argv[2] != '-') && (*argv[2] != '*') &&
		(*argv[2] != '/') && (*argv[2] != '%') && (*argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '%' || *argv[2] == '/') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	calc = (*get_op_func(operator))(num1, num2);

	printf("%d\n", calc);

	return (0);

}
