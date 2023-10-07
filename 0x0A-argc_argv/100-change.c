#include <stdio.h>

/**
 * main - Program main entry point
 * @argc: length of program arguments
 * @argv: Array that contains program arguments and it name
 * Return: None (void)
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins[] = {25, 10, 2, 1};
	int numCoins, minCoins;
	int remainingCents, numThisDomination;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	numCoins = sizeof(coins) / sizeof(coins[0]);

	minCoins = 0;
	remainingCents = cents;

	for (i = 0; i < numCoins; i++)
	{
		numThisDenomination = remainingCents / coins[i];

		remainingCents -= numThisDenomination * coins[i];

		minCoins += numThisDenomination;
	}

	printf("%d\n", minCoins);

	return (0);
}
