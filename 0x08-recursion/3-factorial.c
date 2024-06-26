#include "main.h"

/**
  * factorial - Entry Point
  * @n: Input
  * Return: Always 0
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
