#include <stdio.h>

/**
 * main - prints alphabets a-z and A-Z
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for(ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);

}
