#include <stdio.h>

/**
 * main - the main function
 * for loop - lists the numbers of single digit
 * printf - prints out numbers
 * putchar - provides new line
 * Return: always 0 (success)
 */

int main(void)
{
int singledigit;

for (singledigit = 0; singledigit <= 9; singledigit++)
{
printf("%d", singledigit);
}
putchar('\n');
return (0);
}
