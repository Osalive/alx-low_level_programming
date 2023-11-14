#include <stdio.h>

/**
 * print_sign - to print the sign of a number
 * @n: int type of variable
 * Return: 1 if positive, 0 is zero, -1 if negative
 * putchar: prints + if positive, 0 if zero, - if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
