#include "main.h"
#include <stdio.h>
/**
 * main - The program prints 1 to 100, Prints Fizz or Buzz for mulpitles of each numbers of 3 and 5 respectively, and multiple of 3 and 5 prints FizzBuzz.
 * Return: Always 0.
 **/
int main(void)
{
	int n = 1;
	printf("%d", n);
	for (n =2; n <= 100; n++)
	{
		if ((n%3==0) && (n%5==0))
		{
			printf(" FizzBuzz");
		}
		else if (n%3==0)
		{
			printf(" Fizz");
		}
		else if (n%5==0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d",n);
		}

	}
	printf("\n");
	return (0);
}
