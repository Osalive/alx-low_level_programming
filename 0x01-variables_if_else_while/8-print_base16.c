#include <stdio.h>

/**
 * main - the main function
 * for loop - loop for the numbers of base 16
 * putchar - prints out the base 16 numbers
 * Return: always 0 (success)
 */

int main(void)
{
int num;
char letter;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}

for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
