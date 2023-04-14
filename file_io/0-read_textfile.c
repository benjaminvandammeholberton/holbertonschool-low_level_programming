#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: the name of the file that has to be print
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * 0, if the file can not be opened or read or
 * if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t i;
	char *buff;
	size_t bytes;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes = read(fd, buff, letters);
	for (i = 0; i < bytes; i++)
	{
		_putchar(buff[i]);
	}

	close(fd);
	free(buff);

	return (bytes);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
