#include "main.h"


char *_strncpy(char *dest, char *src, int n)
{
	int i, size = 0;

	for (i = 0; (*(src + i)) != '\0'; i++)
		size++;
	for (i = 0; i < n; i++)
	{
		if (i < size)
		{
			*(dest + i) = *(src + i);
		}
		else
		{
			*(dest + i) = '\0';
		}
	}
	return (dest);
}
