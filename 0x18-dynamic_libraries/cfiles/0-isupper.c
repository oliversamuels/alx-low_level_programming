#include "main.h"

/**
  * _isupper - checks if a character is upper
  * @c: The character to be checked
  * Return: 1 if @c is upper, 0 otherwise
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
