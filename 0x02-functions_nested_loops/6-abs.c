#include "main.h"

/**
  * _abs - Computes the absolute value of and int
  * @n: the integer to compute
  * Return: Always 0 (success)
  */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}

	return (n);
}
