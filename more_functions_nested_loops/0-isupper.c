/**
 * _isupper- checks for uppercase character.
 * @c: character checked.
 * Return: 1 for success / 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
