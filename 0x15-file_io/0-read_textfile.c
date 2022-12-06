#include "main.h"

/**
  * read_textfile - Entry Point
  * @filename: Input
  * @letters: Input
  * Return: Alaays 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd1;
	ssize_t fd2;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	fd1 = open(filename, O_RDONLY);

	if (fd1 < 0)
	{
		free(buf);
		return (0);
	}

	fd2 = read(fd1, buf, sizeof(char) * letters);
	if (fd2 < 0)
	{
		free(buf);
		close(fd1);
		return (0);
	}

	fd2 = write(STDOUT_FILENO, buf, fd2);
	if (fd2 < 0)
	{
		free(buf);
		close(fd1);
		return (0);
	}

	free(buf);
	close(fd1);
	return(fd2);
}
