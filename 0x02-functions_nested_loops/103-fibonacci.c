#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 Success
 */
int main(void)
{
	long f1 = 1, f2 = 2, f3 = 0;
	long sum = 2;

	while (f3 <= 4000000)
	{
		f3 = f1 + f2;
		if (f3 % 2 == 0)
			sum += f3;
		f1 = f2;
		f2 = f3;
	}
	printf("%ld\n", sum);
	return (0);
}
