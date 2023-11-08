#include <stdio.h>

/**
 * main - the main function
 * for loop - loop for reverse alphabet letters
 * putchar - prints out what is inside for loop
 * Return: always 0 (success)
 */

int main(void)
{
char reverse;

for (reverse = 'z'; reverse >= 'a'; reverse--)
{
putchar(reverse);
}
putchar('\n');
return (0);
}
