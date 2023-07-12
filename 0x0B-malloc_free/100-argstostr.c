#include "main.h"

/**
 * _strcat - Concat string, src appended to dest
 *
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Concat newString to dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}

/**
 * _strlen - Return the number of the length of the string
 *
 * @s: This is the string to check
 *
 * Return: Return the length of the string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}

/**
 * argstostr - Concats argv to new string
 *
 * @ac: Argument count
 * @av: Arguments
 *
 * Return: Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int index, sum_string;
	char *new_string;

	sum_string = 1;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (index = 0; index < ac && av[index]; index++)
	{
		sum_string += _strlen(av[index]);
	}
	new_string = malloc((sum_string * sizeof(char)) + ac);
	for (index = 0; index < ac && av[index]; index++)
	{
		new_string = _strcat(new_string, av[index]);
		new_string = _strcat(new_string, "\n");
	}
	if (new_string == NULL)
		return (NULL);
	return (new_string);
}
