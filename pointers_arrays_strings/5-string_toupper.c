/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s : pointer on a string
 * Return: the string n uppercase
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
