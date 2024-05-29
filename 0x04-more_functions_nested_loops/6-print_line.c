#include "main.h"

/**
  * print_line - Draws a straight line
  * @n: Number of times the underscore prnts
  * Return: A line
  */

void print_line(int n)
{
	if (n > 0)
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
