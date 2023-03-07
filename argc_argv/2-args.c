#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives.
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	printf("%s\n", argv[i]);
	return (0);
}
