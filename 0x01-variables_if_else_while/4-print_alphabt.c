#include <stdio.h>

/**
 * main - the main function
 * for loop - list the letters in alphabatical order
 * if - statement to spot letters e and q
 * continue - to skip letters e and q
 * Return: always to 0 (success)
 */

int main(void)
{
char lower;

for (lower = 'a'; lower <= 'z'; lower++)
{
if (lower == 'e')
{
continue;
}
if (lower == 'q')
{
continue;
}
putchar(lower);
}
putchar('\n');

return (0);
}
