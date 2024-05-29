#include "main.h"

/**
  * print_triangle - Prints Triangle
  * @size: Size of triangle to be printed
  * Return: void
  */

void print_triangle(int size)
{
	if (size > 0)
	{
		int x;

		x = 0;

		while (x < size)
		{
			int y, z;

			for (y = 0; y < (size - 1) - x; y++)
			{
				_putchar(' ');
			}

			for (z = 0; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
