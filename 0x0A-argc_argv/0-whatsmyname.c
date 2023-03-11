#include <stdio.h>

/**
 * main - Entry point. Prints the name of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((unused))  argc, char *argv[])
{
	printf("The name of this program is: %s\n", argv[0]);
	return (0);
}
