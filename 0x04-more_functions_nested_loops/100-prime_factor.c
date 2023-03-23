#include "main.h"
#include <stdio.h>

void prime_factors(long n);

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	prime_factors(612852475143);
	return (0);
}

/**
 * prime_factors - print prime factors of Numbers
 * @n: The Number
 * Return: void
 */
void prime_factors(long n)
{
	int i;
	long check = n;

	for (i = 2; i <= n; i++)
	{
		if (check % i == 0)
		{
			if (check / i == 1)
				continue;
			check = check / i;
			i = 2;
			printf("%ld ", check);
		}
	}
	printf("%ld\n", check);
}
