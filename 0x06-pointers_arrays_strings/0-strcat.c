#include "main.h"

/*
 * _strcat - it concatenates two strings
 *
 * @dest : this is the 1st string which will be the output
 * @src : this is the 2nd string which will be the input source
 *
 * Return : it returns the content of the string dest
 */

char *_strcat(char *dest, char *src);
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
