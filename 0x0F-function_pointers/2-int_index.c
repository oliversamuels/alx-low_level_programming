#include <stdlib.h>
#include <stdio.h>
#include "funtion_pointers.h"

/**
  * int_index - Entry Point
  * @array: Input
  * @size: Input
  * @cmp: Input Function
  * Return: Always
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL)
		return;
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
