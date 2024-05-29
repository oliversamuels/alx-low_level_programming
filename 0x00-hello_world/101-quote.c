#include<stdio.h>
#include<string.h>

/**
 * main - Prints to standard error
 *
 * Return: returns 1 (error)
 *
 */

int main(void)
{
	char x[70] = "and that piece of art is useful\"";
	char y[] = " - Dora Korpar, 2015-10-19\n";

	strcat(x, y);

	fprintf(stderr, "%s", x);

	return (1);

}
