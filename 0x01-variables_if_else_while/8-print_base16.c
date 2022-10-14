#include <stdio.h>

/**
 * main - prints all the numbers in hexadecimal
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);

}
