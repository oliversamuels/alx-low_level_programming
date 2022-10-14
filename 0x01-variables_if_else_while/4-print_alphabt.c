#include <stdio.h>

/**
 * main - prints all the alphabets in lowercase except 'q' and 'e'
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		} else
		{
			putchar(ch);
		}

	}

	putchar('\n');

	return (0);

}
