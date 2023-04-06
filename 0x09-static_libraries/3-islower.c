#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the Character whose check
 * Return: 1 if c is lowercase oR 0 Otherwise
 */
int _islower(int c)
{
	int check = 0, i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			check = 1;
			break;
		}
	}
	return (check);
}
