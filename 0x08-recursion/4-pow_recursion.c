#include "main.h"
/**
 * _pow_recursion - This function raises the value x to the power y
 * @x: This is base int
 * @y: This is the power int
 * Return: x raised to the power of y
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
