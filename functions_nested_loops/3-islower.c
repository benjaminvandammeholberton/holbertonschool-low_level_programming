#include "main.h"

/**
 * _islower - check if the character 'l' is lower.
 * @l: caracter checked
 * Return: 1 if l is in lower case, 0 if not.
 */

int _islower(int l)
{
	if (97 < l && 122 < l)
		return (1);
	return (0);
}
