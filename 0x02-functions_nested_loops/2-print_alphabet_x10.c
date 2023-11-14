#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 * for loop - counts 10 times and prints a to z
 * putchar - prints out the variable lower
 */

void print_alphabet_x10(void)
{
char lower;
int n;
for (n = 0; n < 10; n++)
{
putchar('\n');
for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}
}
}
