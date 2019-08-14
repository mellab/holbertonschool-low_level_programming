#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: adress to filename
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 * If filename is NULL return -1
 * Return 1 if the file exists and -1 if the file does not exist or if you do
 * not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	register int fd, wr, length = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
