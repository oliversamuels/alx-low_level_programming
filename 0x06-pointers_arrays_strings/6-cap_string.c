#include "main.h"

/**
 * *cap_string - Capitalize all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */

char *cap_string(char *n)
{
	int i,j;
	int cap = 32;
	int sp[] = {',',';','.','?','"',
		'(',')','{','}',' ','\n','\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == sp[j])
			{
				j = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
