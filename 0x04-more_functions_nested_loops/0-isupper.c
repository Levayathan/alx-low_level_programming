#include "main.h"

/**
 * _isupper - checks for uppercase
 *
 * C is the character to be  checked for case
 *
 * Return: 1 if uppercase, 0 if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}