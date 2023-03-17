#include <stdio.h>

/**
 * main -> Entry Point
 *
 * Objective: Use putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, w;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
			for (k = j; k <= '9'; k++)
			{
				for (w = k; w <= '9'; w++)
				{
					if ((i == '0') && (j == '0') && (k == '0') && (w == '0'))
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(w);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
