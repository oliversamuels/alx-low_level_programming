#include "main.h"

/**
 * *_strncat - A function that concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n: Number of byte to use from source string
 * Return: Destination string is returned
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
		{
			j = n;
		}
	}

	return (dest);

}
