/**
 * _strncpy - function that copies a string.
 * @dest: destination
 * @src: source
 * @n: nomber of bytes from source that will be copied
 * Return: pointer on destination
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0 ; i < n && src[i] != 0 ; i ++)
                dest[i] = src [i];
        return(dest);

}
