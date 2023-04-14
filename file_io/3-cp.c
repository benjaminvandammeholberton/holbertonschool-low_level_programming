#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - function  that copie  the content of a file in another file
 * @argc: nombre of arguments 
 * @argv: arguments
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int file_from, file_to, fd1, fd2, a = 1;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], S_IRUSR);
	file_to = creat(argv[2], 0664);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (a != 0)
	{
	a = read(file_from, buf, 1024);
	write(file_to, buf, a);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	fd1 = close(file_from);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	fd2 = close(file_to);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	return (0);
}
