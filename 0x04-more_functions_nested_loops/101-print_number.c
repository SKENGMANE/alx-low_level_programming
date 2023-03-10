#include"main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
*/

void print_number(int n)
{
	unsigned int num;

	/* first check if its negative */
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else 
	{
		num = n;
	}

	/* print the first few digits */
	if (num / 10)
	{
		print_number(num / 10);
	}
	/* print the last digit */
	_putchar((num % 10) + '0');
}
