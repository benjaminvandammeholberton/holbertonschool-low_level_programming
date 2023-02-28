/**
 * _strncat - function that concatenates two strings.
 * It will use at most n bytes from src;
 * @dest : destination string
 * @src : source string
 * @n : number of bytes concatenated from src.
 * Retrun: pointer (pointer on dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l = 0;
	char *pointeur = dest;

	for (i = 0 ; dest[i] != '\0' ; i++)
	     l++;

	for (i = 0 ; i < n && src[i] != 0 ; i++)
		dest[i + l] = src [i];

	return (pointeur);
}
