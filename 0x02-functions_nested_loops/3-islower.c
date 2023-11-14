#include <stdio.h>

/**
 * _islower - to check for lowercase characters
 * if - statment to check lowercase characters
 * Return: 1 if the statement is true and 0 if false
 * @c: int type variable
 */

int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
return (0);
}
