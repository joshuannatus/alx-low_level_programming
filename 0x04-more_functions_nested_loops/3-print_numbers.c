#include "main.h"
/**
 * print_numbers(void)- This program prints numbers from 0 to 9
 * @void: This the data type
 *
 * Return: The value of 0 to 9
 **/
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
