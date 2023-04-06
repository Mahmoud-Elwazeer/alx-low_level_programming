#include "main.h"

/**
 * is_prime_number_aux - auxuiliary function
 * @n: Tne Number to check
 * @i: index
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number_aux(int n, int i)
{
	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % i == 0)
		return (0);
	if (i == n - 1)
		return (1);
	return (is_prime_number_aux(n, i + 1));
}

/**
 * is_prime_number - prime number checker
 * @n: Number to check
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (is_prime_number_aux(n, 2));
}
