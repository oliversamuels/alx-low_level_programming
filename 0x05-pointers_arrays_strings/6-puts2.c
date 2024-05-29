#include "main.h"

/**
  * puts2 - Prints every character of a string
  * @str: String to be printed
  * Return: Always 0
  */

void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if ((j % 2) == 0)
		{
			_putchar(str[j]);
		}
		else
		{
			continue;
		}
	}

	_putchar('\n');
}
