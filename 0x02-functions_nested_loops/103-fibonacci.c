#include"main.h"

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
	unsingned long int fib1 = 0, fib2 = 1, sum = 0;
	int total_sum;
	

	while 
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%d\n", total_sum);

	return (0);
}
