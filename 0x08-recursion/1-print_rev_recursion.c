#include "main.h"

/**
  * _print_rev_recursion - Entry Point
  * @s: input
  * Return: Always 0
  */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		return;
	}

	_putchar(*s);
}
