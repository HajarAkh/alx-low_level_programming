#include "main.h"

/**
 * _islower - function to check lowercase character
 *
 * @c: checks input of function
 *
 * Return: 1 if c is lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
