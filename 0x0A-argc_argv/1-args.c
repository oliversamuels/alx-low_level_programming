#include <stdio.h>

/**
  * main - Prints the number of argument
  * @argc: input
  * @argv: input
  * Return: Always 0
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}

	printf("%d\n", i - 1);

	return (0);
}
