#include "main.h"

/**
  * print_last_digit - Prints the last digit
  * @n: The parameter to be checked
  * Return: Always 0 (success)
  */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
	{
		x = (-1 * x);
	}

	_putchar(x + '0');
	return (x);
}
