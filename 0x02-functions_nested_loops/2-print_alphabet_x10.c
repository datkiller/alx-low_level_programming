#include "main.h"

/**
 * print_alphabet - repeat function
 */

void print_alphabet_x10(void)
{
	char c;
	int z = 0;

	while (z <= 9)
	{
	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	z++;
	}
}
