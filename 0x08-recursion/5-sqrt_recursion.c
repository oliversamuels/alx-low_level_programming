#include "main.h"

int _sqrt_(int i, int j);

/**
  * _sqrt_recursion - Entry Point
  * @n: Input
  * Return: Always 0
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_(n, (n + 1) / 2));
	}
}

/**
  * _sqrt_ - Entry Point
  * @i: Input
  * @j: Input
  * Return: if square root
  */

int _sqrt_(int i, int j)
{
	if (j < 1)
	{
		return (-1);
	}
	else if (j * j == i)
	{
		return (j);
	}
	else
	{
		return (_sqrt_(i, j - 1));
	}
}
