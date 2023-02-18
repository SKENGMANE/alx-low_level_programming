#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z';)
	{
		putchar(ch);
		++ch;
	}
		putchar('\n');
return (0);
}

