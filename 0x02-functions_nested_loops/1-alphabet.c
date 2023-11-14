#include <stdio.h>

/**
 * print_alphabet - to ptint the lowercase alphabets
 * for loop - to list letters from a to z
 * putchar - prints out thelower variable
 */

void print_alphabet(void)
{
char lower;
for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}
putchar('\n');

}
