#include "main.h"

/**
  * _strlen - Entry Point
  * @s: Input
  * Return: Always 0
  */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
  * create_file - Entry Point
  * @filename: Input
  * @text_content: Input
  * Return: Always 0
  */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd1;
	int fd2;

	if (filename == NULL)
		return (-1);

	fd2 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd2 < 0)
		return (-1);

	if (text_content)
	{
		fd1 = write(fd2, text_content, _strlen(text_content));
		if (fd1 < 0)
		{
			close(fd2);
			return (-1);
		}
	}

	close(fd2);
	return (1);
}
