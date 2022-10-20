#include "main.h"

/**
  * more_numbers - print numbers 10 times
  * Return: 0 success
  */

void more_numbers(void)
{
	int n, x;

	x = 0;

	while (x < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}

			_putchar((n % 10) + '0');
		}

		_putchar('\n');
		x++;
	}
}
