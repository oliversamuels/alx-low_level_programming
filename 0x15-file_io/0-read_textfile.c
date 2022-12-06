#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
  * read_textfile - Entry Point
  * @filename: Input
  * @letters: Input
  * Return: Alaays 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd1, fd2;
	char buf[letters];

	if (filename == NULL)
		return (0);

	fd1 = open(filename, O_RDONLY);

	if (fd1 < 0)
		return (0);

	fd2 = write(1, buf, read(fd1, buf, letters));

	close(fd1);

	if (fd2 < 0)
		return (0);

	return(fd2);
}
