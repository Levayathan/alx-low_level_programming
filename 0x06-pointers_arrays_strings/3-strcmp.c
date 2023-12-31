#include "main.h"

/**
 * _strcmp - It compares strings
 *
 * @s1: String number 1
 * @s2: String number 2
 *
 * Return: if the strings are equal return "0" if not return other number
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
