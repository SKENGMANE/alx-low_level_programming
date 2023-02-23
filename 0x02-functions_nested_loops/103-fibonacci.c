#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4million
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int sum = 0;
	int first = 1, second = 2, next;

	while (second <= 400000)
	{
		if (second % 2 == 0)
			sum += second;
		next = first + second;
		first = second;
		second = next;
	}
	printf("%d\n", sum);

	return (0);
}
