#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Entry point
  * @a: input
  * @size: input
  * Return: Always 0
  */

void print_diagsums(int *a, int size)
{
	int i, j, totalx = 0, totaly = 0;

	for (i = 0; i <= (size * size) - size; i = i + size + 1)
	{
		totalx = totalx + a[i];
	}

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{
		totaly = totaly + a[j];
	}

	printf("%d, %d\n", totalx, totaly);
}
