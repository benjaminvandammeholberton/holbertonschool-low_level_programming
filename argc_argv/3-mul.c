#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
		printf("Error");
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
