#include <stdio.h>

/**
 * main - Main program entry
 * Print the text passed to the printf function
 * Return 0 to stop the program
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: 8 byte(s) %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: 8 byte(s) %d byte(s)\n", sizeof(float));
	return (0);
}
