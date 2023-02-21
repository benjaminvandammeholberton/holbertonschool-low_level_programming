#include "main.h"
/**
 * _isalpha- function that checks for alphabetic character
 * @c: caracter checked
 * Return: 1 for success, if not, 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
