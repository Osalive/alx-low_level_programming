#include <stdio.h>

/**
 * main - the main function
 * for - loop that holds the numbers
 * if - statement to target number 9
 * putchar -prints whats in the loop
 * Return: always 0 (success)
 */

int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num == '9')
continue;

putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}
