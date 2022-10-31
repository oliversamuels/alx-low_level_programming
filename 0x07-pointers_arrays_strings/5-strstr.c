#include "main.h"
#include <stdio.h>

/**
  * _strstr - Entry point
  * @haystack: input
  * @needle: input
  * Return: Always 0
  */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
