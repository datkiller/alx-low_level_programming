#include "main.h"

/**
 * main - name priting function
 * Return: 0 sucess
 */

void print_alphabet(void)
{
	char name;

	for(name = 'A' ; name <= 'Z' ; name++) {
		_putchar(name);
	}
	_putchar('\n');
}
