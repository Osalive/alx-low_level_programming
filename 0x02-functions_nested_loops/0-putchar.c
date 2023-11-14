#include <stdio.h>

/**
 * main - the main function
 * putchar - prints out the output of the variable
 * for loop - increases i to 8 characters
 * Return: always 0 (success)
 */
int main(void)
{
char p[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
putchar(p[i]);
}
putchar('\n');
return (0);
}
