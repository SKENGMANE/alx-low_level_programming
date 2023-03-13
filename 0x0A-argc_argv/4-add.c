#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point. Adds positive numbers.
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 1 if invalid arguments are passed
 */
int main(int argc, char *argv[])
{
	int i, j, num;
	unsigned int sum = 0;

	/* If no numbers are passed to the program, print 0 and return */
	if (argc ==  1)
	{
		printf("0\n");
		return (0);
	}
	/* Loop through all command line arguments */
	for (i = 1; i < argc; i++)
	{
		/* Check if current character is not a digit */
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		/* Convert current argument to integer and add to sum */
		num = atoi(argv[i]);
		sum += num;
	}
	/* Print the sum of all positive numbers */
	printf("%d\n", sum);
	return (0);
}
