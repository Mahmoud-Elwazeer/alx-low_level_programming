#include <stdio.h>
#include "main.h"

void printword(char word[]);
/**
 * main -> Entry Point
 * 
 * Return -> Always 0 (Success)
 */
int main(void)
{
	printword("_putchar\n");
	return (0);
}

/**
 * printword -> print (_putchar)
 * No Return
 */
void printword(char word[])
{
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
		_putchar(word[i]);
	}	
}
