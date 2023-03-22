#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - function that print numbers, followed by a new line
  * @separator: string to be printed between numbers
  * @n:number of iintegers passed to the function
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
		printf("%d, ", va_arg(ap, int));
	printf("%d\n", va_arg(ap, int));

	va_end(ap);

}
