#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string that has to be reversed.
 */

void print_rev(char *s)
{
	int i = 0;
	int n = 0;

	while (s[i] != '\0')
	{
		n = n + 1;
		i++;
	}
	for (i = n ; i >= 0 ; i--)
		_putchar (s[i]);
	_putchar ('\n');
}
