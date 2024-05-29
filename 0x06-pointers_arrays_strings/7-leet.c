#include "main.h"

/**
 * *leet - Encodes a string into 1337
 * @n: input
 * Return: Always 0
 */

char *leet(char *n)
{
	int i, j;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int rep[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == find[j])
			{
				n[i] = rep[j / 2];
				j = 9;
			}
		}
	}

	return (n);

}
