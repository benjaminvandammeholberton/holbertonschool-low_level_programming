#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string that has to be reversed.
 */

void rev_string(char *s)
{
	int i = 0;
	int n = 0;
	char tab;

	while (s[n] != '\0')
	{
		n = n + 1;
	}
	while (i < n--)
	{
		tab = s[i];
		s[i++] = s[n];
		s[n] = tab;
	}
}
