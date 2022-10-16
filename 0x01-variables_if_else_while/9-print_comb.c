#include <stdio.h>

/**
 * main - Prints numbers between 0 - 9 with commas and space
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');

		}

	}

	putchar('\n');
	return (0);

}
