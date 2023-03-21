#include "main.h"
#include <stdlib.h>
/** malloc_checked - This is a function that checks allocated memory
 * @b: amount of bytes
 * Return: 98
 * if malloc fail
 */

void *malloc_checked(unsigned int b)
{
	char *j;

	j = malloc(b);
	if (j == NULL)
		exit(98);
	return (p);
}
