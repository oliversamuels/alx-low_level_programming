#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - Entry Point
  * @seperator: Input
  * @n: Input
  * Return: Always 0
  */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	if (seperator == NULL)
		return;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i != (n - 1))
		{
			printf("%s", seperator);
		}
	}
	printf("\n");

	va_end(valist);
}
