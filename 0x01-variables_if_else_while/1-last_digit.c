#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns random number to n
 *
 * Return - Return 0
 */
int main(void)
{
	int n;
	int string;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	    string = n % 10;
	if (string > 5)
	{
		printf("last digit of %d is %d and is greater than 5", n, string);
	}
	else if (string < 6 && string != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, string);
	}
	else
		printf("last digit of %d is %d and is 0", n, string);
	return (0);
}
