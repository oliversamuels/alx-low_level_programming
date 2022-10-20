#include <stdio.h>

/**
  * main - Print numbers
  * Return: 0
  */

int main(void)
{
	int x;

	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (x = 1; x <= 100; x++)
	{
		if ((x % 15) == 0)
		{
			printf("%s ", fb);
		}
		else if ((x % 5) == 0)
		{
			printf("%s ", b);
		}
		else if ((x % 3) == 0)
		{
			printf("%s ", f);
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");

	return (0);
}
