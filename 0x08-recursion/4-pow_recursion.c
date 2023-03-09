#include "main.h"

/**
 * _pow_recursion - a function that returns the power of @x by @y x^y
 *
 *
 * @x: integer x
 * @y: integer y
 *
 * Return: the value of @x raised to the power of @y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)		/*if y is a negative number, return -1*/
		return (-1);
	else if (y == 0)	/*x to the power of 0 is 1*/
		return (1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0); /* default return value */
}
