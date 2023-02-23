
#include "main.h"

/**
 * void print_most_numbers -  a function that prints the numbers, from 0 to 9
 *
 * @x: int number
 *
 * Return: none
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
