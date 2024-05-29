#include "main.h"

/**
  * _memcpy - Entry point
  * @dest: input
  * @s: input
  * @n: input
  * Return: Always 0
  */

char *_memcpy(char *dest, char *s, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = s[i];
	}

	return (dest);
}
