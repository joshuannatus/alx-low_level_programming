#include "main.h"

/**
 * _strlen - main
 * @s: The string
 * Return: Count
 **/
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
