#include <stdio.h>

/**
 * main - the main function
 * for loop - to list the letters in alphabetical order
 * putchar - prints out what is inside letters
 * Return: always 0 (success)
 */

int main(void)
{
char lower;
char upper;

for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}

for (upper = 'A'; upper <= 'Z'; upper++)
{
putchar(upper);
}

putchar('\n');

return (0);
}
