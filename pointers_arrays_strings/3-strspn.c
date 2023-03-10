/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: string containing the list of characters to match in str1.
 * Return: number of characters in the initial segment
 * of str1 which consist only of characters from str2.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (count);
	}
	return (count);
}
