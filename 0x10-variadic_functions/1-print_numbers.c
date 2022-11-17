#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - Entry Point
  * @seperator: Input
  * @n: Input
  * Return: Always 0
  */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (seperator == NULL)
		return;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, const unsigned int));
		if (i != (n - 1))
			printf("%s", seperator);
	}
	printf("\n");

	va_end(valist);
}
