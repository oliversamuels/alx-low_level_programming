#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
  * _strdup - Entry Point
  * @str: input
  * Return: Always 0
  */

char *_strdup(char *str)
{
	int i, end;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	array = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
	{
		array[i] = str[i];
	}

	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}
