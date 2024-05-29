#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array
 * @a: Integer Array
 * @n: Number of elements of the array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
