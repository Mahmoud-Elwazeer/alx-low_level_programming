#include <stdio.h>
#include <stdlib.h>

/**
 * main -> Entery Point
 *
 * Objective: Check Number if Positive or Negative or Zero
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n;
	n = rand();
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	return (0);
}
