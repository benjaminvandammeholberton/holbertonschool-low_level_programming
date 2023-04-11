#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>


/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buf;
	size_t count;

	if (text_content == NULL)
		return (-1);
	buf = text_content;
	count = strlen(buf);

	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	write(fd, buf, count);

	return (1);
}
