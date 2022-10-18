#include "main.h"

/**
  * print_sign - Prints the signs
  * @n: The parameter that is being checked.
  * Return: Always 0 (success)
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
