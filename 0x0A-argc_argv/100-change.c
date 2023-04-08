#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry func
 * @argc: Number of commands
 * @argv: array include commands
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n = 0;
	int i;

	if (argc > 1)
	{
		int count = 0, div = 0;
		int coins[] =  {25, 10, 5, 2, 1};

		n = atoi(argv[1]);
		if (n > 0)
		{
			while (n > 0)
			{
				for (i = 0; i < 5; i++)
				{
					if (n % coins[i] == 0)
					{
						if (i == 0 || i == 1)
						{
							div = n / coins[i];
							n -= div * coins[i];
							count += div;
						}
						else
						{
							count += 1;
							n -= coins[i];
						}
					}
					if (n == 0)
						break;
				}
			}
			printf("%d\n", count);
		}
		else
			printf("0\n");
	}
	else
		printf("Error\n");
	return (0);
}
