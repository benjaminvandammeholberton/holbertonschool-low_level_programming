#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * print_all - function that prints differents type of arguments
  * @format: string reprsenting type of arguments
  */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}

/**
  * printInt - function that print an integer
  * @ap: next unknow argument that has to be printed
  */
void printInt(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
  * printChar - function that print a character
  * @ap: next unknow argument that has to be printed
  */
void printChar(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
  * printFloat - function that print a float
  * @ap: next unknow argument that has to be printed
  */
void printFloat(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
  * printString - function that print a string
  * @ap: next unknow argument that has to be printed
  */
void printString(va_list ap)
{
	printf("%s", va_arg(ap, char *));
}


