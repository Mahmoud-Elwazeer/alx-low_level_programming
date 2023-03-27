#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: pointer point to start string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, r = 0, flag = 1;
	int count = 0, j = 0, p = 1;

	for (i = 0; (*(s + i)) != '\0'; i++)
	{
		if (*(s + i) == '-')
			flag = -1;
		else if (*(s + i) == '+')
			flag = 1;
		if ((*(s + i) >= 'a' && *(s + i) <= 'z'))
			continue;
		if ((*(s + i) >= 'A' && *(s + i) <= 'Z'))
			continue;
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			for (j = 0; j < count; j++)
				p *= 10;
			r = r * p + (*(s + i) - '0');
			p = 1;
			count++;
		}
	}
	return (r * flag);
}
