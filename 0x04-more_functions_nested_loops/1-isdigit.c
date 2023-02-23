#include "main.h"
/**
 * _isdigit.c - This c program check for a digit (0 through 9)
 *
 * @c: This is the variable that would be checked 
 *
 * Return: This program will return 1 if it's a digit and 0 if not
 **/
int _isdigit(int c)
{
	if (c>= 48 && c <=57)
	{
		return (1);
	}
	else
		return (0);
}
