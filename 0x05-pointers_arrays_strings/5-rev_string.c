#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: pointing to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int x, y, z;
	char *b, bux;

	b = s;

	while (s[y] != '\0')
	{
		y++;
	}

	for (z = 1; z < y; z++)
	{
		b++;
	}

	for (x = 0; x < (y / 2); x++)
	{
		bux = s[x];
		s[x] = *b;
		*b = bux;

		b--;
	}
}

