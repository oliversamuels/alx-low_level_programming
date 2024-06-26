#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * array_range - Entry Point
  * @min: Input
  * @max: Input
  * Return: Always 0
  */

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++)
		;

	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
