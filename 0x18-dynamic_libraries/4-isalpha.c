#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: Character whose check
 * Return: 1 if c is a letter, lowercase or uppercase , OR 0 Otherwise
 */
int _isalpha(int c)
{
	int check;

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		check = 1;
	else
		check = 0;
	return (check);
}
