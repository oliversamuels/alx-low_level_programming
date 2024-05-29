#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Entry Point
  * @b: Input
  * Return: Always 0
  */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
	{
		exit(98);
	}

	return (n);
}
