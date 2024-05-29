#include <stdio.h>

/**
 * main - prints the alphabets a-z in lowercase
 *
 * Return: returns 0 after a successful op
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);

}
