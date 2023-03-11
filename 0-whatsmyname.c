#include <stdio.h>

/**
 * main - entry point
 *	print the name of the program and exit
 *
 * @argc: number of cli arguments
 * @argv: list of cli arguments
 *
 * Return: Always 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	(void)argc; /* unused variable */
	printf("The name of this program is: %s\n", argv[0]);

	return (0);
}