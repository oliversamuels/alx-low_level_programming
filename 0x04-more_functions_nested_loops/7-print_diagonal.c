#include "main.h"

/**
  * print_diagonal - Draws a diagonal line
  * @n: Number of times to print
  * Return: Return Line
  */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int x, y;

		x = 1;

		while (x <= n)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}

	}
	else
	{
		_putchar('\n');
	}
}
