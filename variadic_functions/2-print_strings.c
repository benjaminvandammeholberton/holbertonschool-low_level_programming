#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * print_strings - function that prints strings, followed by a new line
  * @separator: string to be printed between the strings
  * @n: number of strings passed to the function
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	else if (separator == NULL)
		for (i = 0; i < n - 1; i++)
			printf("%s", va_arg(ap, char *));

	else
		for (i = 0; i < n - 1; i++)
		{
			printf("%s", va_arg(ap, char *));
			printf("%s", separator);
		}

	printf("\n");


	va_end(ap);
}
