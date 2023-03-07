#include <stdio.h>
#include "main.h"
/**
 * main - function that prints a number of arguments passed into it.
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void) **argv;
	return (0);
}
