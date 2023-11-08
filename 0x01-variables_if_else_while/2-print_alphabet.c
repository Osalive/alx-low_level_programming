#include <stdio.h>

/**
 * main - the main function
 * for loop - to list the letters in alphabetical order
 * putchar - prints out what is inside letters
 * return : 0
 */

int main() {
	char letters;
    
	for (letters = 'a'; letters <= 'z'; letters++)
	{
	putchar(letters);   
	}

    return 0;
}
