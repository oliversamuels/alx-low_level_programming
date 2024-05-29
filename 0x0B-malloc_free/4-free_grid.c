#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_grid - Entry Point
  * @grid: Input
  * @height: Input
  * Return: Always 0
  */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		free(grid);
	}
}
