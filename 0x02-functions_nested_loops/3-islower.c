#include "main.h"

/**
 * _islower - takes a parameter and checks if is lower or upper
 * @c: The character to check
 * Return: Return 1 if the character is lower case and 0 if
 * otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);

}
