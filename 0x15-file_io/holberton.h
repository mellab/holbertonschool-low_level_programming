#ifndef _holberton_h_
#define _holberton_h_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* _holberton_h_ */
