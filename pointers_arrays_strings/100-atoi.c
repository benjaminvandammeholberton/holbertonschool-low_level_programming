/**
 * _atoi - function that convert a string to an integer.
 * @s: pointer on the string scanned.
 * Return: an integer
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num * sign);

}
