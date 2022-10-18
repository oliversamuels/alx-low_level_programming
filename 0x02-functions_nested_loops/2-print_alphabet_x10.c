#include <stdio.h>

/**
 * print_alphabet_x10 - It prints alphabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i = 0, ch;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');

		i++;
	}
}

/**
 * main - A function that calls the print_alphabet_x10 function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	print_alphabet_x10();

	return (0);
}
