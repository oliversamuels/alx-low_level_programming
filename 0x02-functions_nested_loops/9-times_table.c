#include "main.h"

/**
  * times_table - Prints 9 Times table start with 0
  *
  * Return: Always 0 (success)
  */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (y = 1; y <= 9; y++)
		{
			z = (x * y);
			if ((z / 10) > 0)
			{
				_putchar((z / 10) + '0');
			} else
			{
				_putchar(' ');
			}

			_putchar((z % 10) + '0');

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
