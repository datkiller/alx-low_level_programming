#include "main.h"

/**
 * print_alphabet - name priting function
 * Return: 0 sucess
 */

void print_alphabet(void)
{
	char name;

	for(name = 'a' ; name <= 'z' ; name++)
	{
		_putchar(name);
	}
	_putchar('\n');
}
