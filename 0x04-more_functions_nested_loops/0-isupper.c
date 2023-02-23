#include "main.h"
/**
 * _isupper - This is a function that cjecks for upper and lower case
 * @c: This is the character we are checking
 *
 * Return: This program returns 0 if lower case and 1 if upper
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
