#include "main.h"

/**
  * print_to_98 - Print all number from n to 98
  * @n: Nth number
  * Return: Always 0 (success)
  */

void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			_putchar(x);
			_putchar(',');
			_putchar(' ');
		}
	} else
	{
		for (x = n; x >= 98; x--)
		{
			_putchar(x);
			_putchar(',');
			_putchar(' ');
		}
	}

}
