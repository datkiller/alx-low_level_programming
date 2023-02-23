
#include "main.h"

/**
 * print_sign - Fuction determines if the number if greater or less than zero
 *
 * @n: input number as int
 *
 * Return: 1 if greater 0 if equal -1 if less
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
