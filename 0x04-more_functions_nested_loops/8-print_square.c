#include "main.h"

/**
  * print_square - It prints square
  * @size: Size of the square
  * Return: Always 0 (success)
  */

void print_square(int size)
{
	if (size > 0)
	{
		int x, y;

		x = 0;

		while (x < size)
		{
			for (y = 0; y < size; y++)
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
