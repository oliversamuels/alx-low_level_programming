#include "main.h"

/**
  * swap_int - Swaps the value of two integers
  * @a: First Value
  * @b: Second Value
  * Return: Always 0
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
