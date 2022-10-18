#include "main.h"

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
			_putchar(ch);
		}
		_putchar('\n');

		i++;
	}
}
