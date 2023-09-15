#include "main.h"

/**
 * main - Fonction principale du programme
 * Description : Cette fonction calcule la somme de tous
 * les multiples de 3 ou 5
 * inférieurs à 1024 (exclus), puis affiche le résultat.
 * Return: 0 si le programme s'exécute avec succès
 */

int main(void)
{
	int sum = 0;
	int limit = 1024;
	int i;

	for (i = 3; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
