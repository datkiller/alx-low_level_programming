#include "main.h"

/**
 * _islower - Function check for lowercase character
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for sucess - 0 for failure
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
