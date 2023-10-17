#include "main.h"

/**
 * _strlen - checks length of string
 * @s: checked string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
