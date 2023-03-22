#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 Success
 */
int main(void)
{
	long f1 = 1, f2 = 2, f3;
	int i;

	printf("%ld, %ld", f1 , f2);
	for (i = 0; i < 50; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		printf(", %ld", f3);
	}
	return (0);
}
