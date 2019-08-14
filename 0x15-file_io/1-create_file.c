#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 * be written, write “fails”, etc…)
 * if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	register int fd, wr, length = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[length])
			length++;
		wr = write(fd, text_content, length);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
