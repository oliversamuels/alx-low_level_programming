#include <stdio.h>

/**
 * main - prints the alphabet letters in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);

}
