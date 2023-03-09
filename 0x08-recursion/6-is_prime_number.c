#include "main.h"

/**
 * _prime - This function tells if an input number is a prime number.
 * @n: input number.
 * @i: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int _prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + _prime(n, i + 1));
}
/**
 * is_prime_number - this function tells if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_prime(n, 2));
}
