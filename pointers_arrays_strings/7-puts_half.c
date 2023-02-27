#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string choosen
 */

void puts_half(char *str)
{
	int n = 0;
	int i = 0;

	while (str[n] != '\0')
		n++;

	for (i = (n / 2) ; i < n ; i++)
		_putchar (str[i]);
	_putchar ('\n');
}
