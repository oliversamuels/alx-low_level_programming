#include "main.h"

/**
  * rev_string - Reverse a String
  * @s: String to be reversed
  * Return: Always 0
  */

void rev_string(char *s)
{
	int i, count;

	count = 0;
	char temp = s[0];

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		count--;
		temp = s[i];
		s[i] = s[count];
		s[count] = temp;
	}
}
