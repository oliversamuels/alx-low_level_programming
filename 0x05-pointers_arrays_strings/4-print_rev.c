#include "main.h"
#include <string.h>

/**
  * print_rev - Prints the reverse of a string.
  * @s: The string to be reversed
  * Return: Always 0
  */

void print_rev(char *s)
{
	int i, x;

	x = strlen(s);

	for (i = (x - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
