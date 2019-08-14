#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: address to filename
 * @letters: number of letters to read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	register int fd, rd, wr;
	char *buffer = NULL;

	if (!filename)
		return (0);
	buffer = malloc(letters + 1);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
		return (free(buffer), 0);
	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (free(buffer), 0);
	buffer[letters] = '\0';
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
		return (free(buffer), 0);
	free(buffer);
	close(fd);
	return (wr);
}
