#include "main.h"

/**
  * main - Entry Point
  * @argc: Input
  * @argv: Input
  * Return: Always 0
  */

int main(int argc, char **argv)
{
	int s_file, d_file;
	ssize_t f_read = 1024, f_write, f_close;
	char content[1024];

	if (argc != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }

	s_file = open(argv[1], O_RDONLY);
	if (s_file < 0)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	d_file = open(agrv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (d_file < 0)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }

	while (f_read == 1024)
	{
		f_read = read(s_file, content, 1024);
		if (f_read < 0)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		f_write = write(d_file, content, f_read);
		if (f_write < 0)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	f_close = close(s_file);
	if (f_close < 0)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s_file);
		exit(100); }
	f_close = close(d_file);
	if (f_close < 0)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d_file);
		exit(100); }

	return (0);
}
