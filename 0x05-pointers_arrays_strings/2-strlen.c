#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: String
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}

	return (len);
}
