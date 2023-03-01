/**
 * _strstr -  function that locates a substring.
 * @haystack: string to be scanned.
 * @needle: small string to be searched with-in haystack string.
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
		}
	}
	return (0);
}
