/**
 * *_memset - function that fills memory with a constant byte.
 * @s: the string to modifie
 * @n: he number of bytes to be set to the value.
 * @b: the value to be set.
 * Return: the string modified
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i <= n && s[i] != '0' ; i++)
		s[i] = b;
	return (s);
}
