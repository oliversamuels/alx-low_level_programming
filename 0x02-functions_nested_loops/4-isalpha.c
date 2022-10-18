#include "main.h"

/**
 * main - checks if a parameter is alphabet
 * @c: Parameter to be checked
 * Return: Returns 1 if it is alphabet and 0 if its not
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
