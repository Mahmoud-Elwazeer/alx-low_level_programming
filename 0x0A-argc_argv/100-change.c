#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry func
 * @argc: Number of commands
 * @argv: array include commands
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n = 0, flag = 0;
	int i = 0, j = 0, count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc > 1)
	{
		n = atoi(argv[1]);
		if (n > 0)
		{
			for (i = 0; i < 5; i++)
			{
				j = 1;
				while (coins[i] * j <= n)
				{
					flag = 1;
					j++;
				}
				if (flag)
				{
					n -= coins[i] * --j;
					count += --j;
					flag = 0;
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
