#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string tested
 */

void puts2(char *str)
{
	int n = 0;
	int i = 0;

	while (str[n] != '\0')
	n++;

	for (i = 0 ; i < n ; i = i + 2)
		_putchar (str[i]);
	_putchar ('\n');
}
