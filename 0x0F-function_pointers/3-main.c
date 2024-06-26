#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - Entry Point
  * @argc: Input
  * @argv: Input
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int one, two, ans;

	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	ans = res(one, two);

	printf("%d\n", ans);
	return (0);
}
