#include "main.h"

/*
 * _strcat - it concatenates two strings
 *
 * @dest : this is the 1st string which will be the output
 * @src : this is the 2nd string which will be the input source
 *
 * Return : it returns the content of the string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (dest[i] != '\0'; i++)
		;
	for (src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
