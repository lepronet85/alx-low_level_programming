#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - The main entry point of the program
 * Affiche du texte en fonction de la valeur de n
 * Return: Return 0 to stop the program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n == 0)
	{
		printf("is zero\n");
	} else
	{
		printf("is negative\n");
	}
	return (0);
}
