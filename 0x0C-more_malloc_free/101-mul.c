#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * print_error - function that prints error message and exits with status 98
 *
 * Return: void
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_digits - function that checks if a string only contains digits
 *
 * @str: string to check
 *
 * Return: 1 if string only contains digits, 0 otherwise
 */
int is_digits(char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - function that multiplies two positive numbers
 *
 * @num1: first number
 * @num2: second number
 *
 * Return: result of multiplication
 */
int multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry = 0, res;
	int *result;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
		print_error();

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			res = (num1[i] - '0') * (num2[j] - '0') +
				  result[i + j + 1] + carry;
			result[i + j + 1] = res % 10;
			carry = res / 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	while (i < len1 + len2)
	{
		printf("%d", result[i]);
		i++;
	}
	printf("\n");

	free(result);
	return (0);
}

/**
 * main - program entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2;

	if (argc != 3)
		print_error();

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digits(num1) || !is_digits(num2))
		print_error();

	return (multiply(num1, num2));
}
