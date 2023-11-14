#include <stdio.h>

/**
 * _isalpha - to check for alphabetic characters
 * if - statment to check lowercase characters
 * Return: 1 if the statement is true and 0 if false
 * @c: int type variable
 */

int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
return (0);
}
