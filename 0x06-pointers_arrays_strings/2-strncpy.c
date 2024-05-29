#include "main.h"

/**
 * *_strncpy - A function that copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: Bytes
 * Return: Returns copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}

		while (i < n)
		{
			dest[i++] = '\0';
		}
	}

	return (dest);

}
