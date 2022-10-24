#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: String to be printed
  * Return: Always 0
  */

void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if ((i % 2) == 0)
	{
		for (j = (i / 2); j < i; j++)
		{
			_putchar(str[j]);
		}

		_putchar('\n');
	}
	else
	{
		for (j = ((i - 1) / 2); j < 1; j++)
		{
			_putchar(str[j]);
		}

		_putchar('\n');
	}
}
