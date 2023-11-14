#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @x: int type variable
 * Return: x
 */

int print_last_digit(int x)
{
	if (x > 0)
	{
		x = x % 10;
	}
	else if (x < 0)
	{
		x = -1 * (x % 10);
	}
	else
	{
		x = 0;
	}
	return (x);
}
