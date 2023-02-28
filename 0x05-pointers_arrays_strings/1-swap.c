#include "main.h"

/**
 * swap_int -  main
 *
 * @a: First integers
 * @b: Second integers
 * Return: Nothing
 **/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
