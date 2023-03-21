#include "main.h"

int _islower(int c)
{
	int check = 0,i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if(c == i)
		{
			check = 1;
			break;
		}
	}
	return check;
}
