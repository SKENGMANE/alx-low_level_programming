#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * this program prints the minimun numbers
 * of coins to make change for an amount of money *
 *
 * @argc: number of cli arguments
 * @argv: list of cli arguments
 *
 * Return: 1 if number of arguments passed is not 1, else 0
 */

int main(int argc, char *argv[])
{
	int cents = 0;
	int num_coins = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int i;

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

	for (i = 0; i < 5; i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", num_coins);
	return (0);
}
