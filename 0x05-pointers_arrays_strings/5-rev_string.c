#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: pointing to string
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int x, z, h;
	char rev;

	for (x = 0; s[x] != '\0'; x++)
	;
	z = 0;
	h = x / 2;

	while (h--)
	{
		rev = s[x - z -1];
		s[x -z -1] = s[z];
		s[z] = rev;
		z++;
	}
}

