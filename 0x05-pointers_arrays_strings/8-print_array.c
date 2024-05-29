#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints the nth number of an array
  * @a: Array
  * @n: Position
  * Return: Always 0
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] == a[n - 1])
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}

	printf("\n");
}
