#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: input
  * @argv: input
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int mul;

	if ((argc > 1) && (argc == 3))
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
