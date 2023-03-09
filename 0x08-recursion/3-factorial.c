#include "main.h"

/*
 * factorial - a function that finds the factorial of n
 *
 * @n: a positive integer
 * return: factorial of @n
 */

int factorial(int n)
{
	if (n < 0) /* returns -1 to indicate an error */
		return (-1);
	else if (n == 0 || n == 1) /* factorial of 0 or 1 is 1 */
		return (1);

	return (n * factorial(n - 1));
}
