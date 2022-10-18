#include <stdio.h>
#include <main.h>

/**
 * print_alphabet - Prints the letters of the alphabets
 */

void print_alphabet(void)
{
	int ch;

	for (ch  = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

}

/**
 * main - Calls the print_alphabet function
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	print_alphabet();

	return (0);

}
