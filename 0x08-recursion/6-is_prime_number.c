#include "main.h"

int check(int n, int m);

/**
  * is_prime_number - Entry Point
  * @n: Input
  * Return: Always 0
  */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (check(n, n / 2) > 0)
	{
		return (1);
	}
	return (0);
}

/**
  * check - Entry point
  * @n: Input
  * @m: Input
  * Return: Always 0
  */

int check(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	if (n % m == 0)
	{
		return (0);
	}
	else
	{
		return (check(n, m - 1));
	}
}
