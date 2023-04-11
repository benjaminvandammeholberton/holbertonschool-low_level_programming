#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated stttring to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	char *buf;
	size_t count;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		buf = text_content;
		count = strlen(buf);
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, buf, count);

	return (1);
}
