#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated memory
 * If malloc fails, terminate with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Error: malloc failed\n");
		exit(98);
	}

	return (ptr);
}
