#include <stdio.h>
#include "main.h"
/**
 * main - function that prints its name, followed by a new line.
 *
 * RETURN: Always 0 (success)
 */

int main (int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
