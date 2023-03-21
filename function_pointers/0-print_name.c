#include "function_pointers.h"
#include <stdlib.h>

/**
  * print_name - Function that prints a name
  *
  * @name: name to print
  * @f: function that print the name
  *
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
