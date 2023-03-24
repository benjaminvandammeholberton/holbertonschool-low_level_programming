#ifndef VARIADI_FUNCTIONS_H
#define VARIADI_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct structure - Array structure
 *
 * @letter: letter associated to the parameter passed
 * @f: The function that print the parameter
 */
typedef struct structure
{
	char *letter;
	void (*f)();
} structure;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printInt(va_list ap);
void printChar(va_list ap);
void printFloat(va_list ap);
void printString(va_list ap);



#endif
