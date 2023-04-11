#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *
 *
 *
 */

int main (int argc, char **argv)
{
	int file_from;
	int file_to;
	int fd1;
	int fd2;
	char *buf;
	int a = 1;

	buf = malloc(1024);
	if (buf == NULL)
		return(-1);
	
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], S_IRUSR | S_IWUSR);
	file_to = creat(argv[2], S_IRUSR | S_IWUSR);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while (a != 0)
	{	
	write(file_to, buf, 1024);
	a = read(file_from, buf, 1024);
	
	}
	if (file_to == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			exit(99);
		}

	fd1 = close(file_from);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd1);
		exit (100);
	}
	fd2 = close(file_to);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd2);
		exit (100);
	}
	free(buf);
	return (0);
}
