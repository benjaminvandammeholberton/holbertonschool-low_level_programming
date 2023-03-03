/**
 * _atoi - function that convert a string to an integer.
 * @s: pointer on the string scanned.
 * Return: an integer
 */

int _atoi(char *s)
{
	int i;
	int sign = 1;
	int num = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;

		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
	}
	return (num * sign);
}
