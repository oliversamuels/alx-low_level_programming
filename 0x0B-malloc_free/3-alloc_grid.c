#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - Entry Point
  * @width: Input
  * @height: Input
  * Return: Always 0;
  */

int **alloc_grid(int width, int height)
{
	int **iarray;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	iarray = malloc(sizeof(int) * height);

	if (iarray == NULL)
	{
		free(iarray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(int) * width);
		if (iarray == NULL)
		{
			free(iarray);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			iarray[i][j] = 0;
		}
	}

	return (iarray);
}
