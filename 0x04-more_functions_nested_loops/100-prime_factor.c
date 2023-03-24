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
	int i = 2;
	long check = n;

	while (i <= check)
	{
		if (check % i == 0)
		{
			if (check / i == 1)
			{
				i++;
				continue;
			}
			else
			{
				check = check / i;
				i = 2;
			}
		}
		else
			i++;
	}
	printf("%ld\n", check);
}
