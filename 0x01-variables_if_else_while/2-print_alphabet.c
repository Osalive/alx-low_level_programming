#include <stdio.h>

/**
 * main - the main function
 * for loop - to list the letters in alphabetical order
 * putchar - prints out what is inside letters
 * Return: always 0 (success)
 */

int main(void)
{
char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
	putchar(letters);
	}

	putchar('\n');
return (0);
}
