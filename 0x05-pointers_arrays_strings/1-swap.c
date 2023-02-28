#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: Pointer
 * @b: Pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
