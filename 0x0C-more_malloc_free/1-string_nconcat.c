#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * string_nconcat - Entry Point
  * @s1: Input
  * @s2: Input
  * @n: Input
  * Return: Always
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, co, co_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n < j)
		j = n;

	j += i;
	arr = malloc(sizeof(char *) * (j + 1));

	if (arr == NULL)
		return (NULL);

	for (co = 0; co < i; co++)
		arr[co] = s1[co];
	for (co_2 = 0; co_2 < j; co_2++)
	{
		arr[co] = s2[co_2];
		co++;
	}

	co++;
	arr[co] = '\0';
	return (arr);
}
