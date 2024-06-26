#include "main.h"

/**
 * *rot13 - Encodes string using rot13
 * @n: input
 * Return: decrypted string
 */

char *rot13(char *n)
{
	int a, b, c;

	b = 13;
	c = 0;

	char swap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P',
		'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f',
		's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v',
		'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M',
		'Z', 'm', 'z'};

	while (n[c] != '\0')
	{
		for (a = 0; a <= 51; a++)
		{
			if (n[c] == swap[a])
			{
				n[c] = n[c] + b;
				a = 51;
			}
			b = b * -1;

		}
		c++;
	}
	return (n);
}
