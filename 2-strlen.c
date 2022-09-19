#include "mainn.h"

/**
 * _strlen - ƒ() returns the length of a string.
 * @s: pointer to a char (the string in question).
 * Return: Length of string
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;
	return (strlen);
}
