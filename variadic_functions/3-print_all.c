#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * print_all - function that prints differents type of arguments
  * @format: type of arguments
  */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator;

	structure mastructure[] = {
		{"i", printInt},
		{"f", printFloat},
		{"c", printChar},
		{"s", printString}
	};

	va_start(ap, format);
	separator = "";
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *mastructure[j].letter)
			{
				printf("%s", separator);
				mastructure[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
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


