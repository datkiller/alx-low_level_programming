#include "main.h"

/**
 * _isalpha - Function that check for c if lowercase or uppercase
 *
 * @c: The character is ASCII code
 *
 * Return: 1 for sucess 0 for failure
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
