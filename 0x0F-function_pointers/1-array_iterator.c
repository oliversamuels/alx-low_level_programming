#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - Entry Point
  * @array: Input
  * @size: Input
  * @action: Input Function
  * Return: Always 0
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
