/**
 * leet - function that encodes a string into 1337.
 * @s: the string to encode
 * Return: the string encoded
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char a[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0 ; s[i] != '0' ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
