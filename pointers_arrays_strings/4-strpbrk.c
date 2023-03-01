/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 * Return: returns a pointer to the character in str1 that matches one of the
 * characters in str2, or NULL if no such character is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
			if (s[i] == accept[j])
				return (&s[i]);
	}
	return (0);
}
