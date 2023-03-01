/**
 * *_strchr - function that locates a character in a string.
 * @s: string to be scanned.
 * @c: the character to be searched in s.
 * Return: a pointer to the first occurrence
 * of the character c in the string str, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;


	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
