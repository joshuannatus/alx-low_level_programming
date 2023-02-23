#include "main.h"
/**
 * print_numbers(void)- This program prints numbers from 0 to 9
 * @void: This the data type
 *
 * Return: The value of 0 to 9
 **/
void _putchar();
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
