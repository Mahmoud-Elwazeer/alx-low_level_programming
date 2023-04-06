#include "main.h"

/**
 * _sqrt_aux - auxiliary function
 * @low: low check number
 * @high: High check number
 * @n: Number to get sqrt
 * Return: the natural square root of a number or -1 if not
 */
int _sqrt_aux(int low, int high, int n)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;

		if ((long)mid * mid == n)
			return (mid);
		else if ((long)mid * mid > n)
			return (_sqrt_aux(low, mid - 1, n));
		else
			return (_sqrt_aux(mid + 1, high, n));
	}
	return (-1);
}

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: number
 * Return: the natural square root of a number or -1 if not
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_aux(1, n, n));
}
