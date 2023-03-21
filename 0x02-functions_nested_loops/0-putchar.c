#include <stdio.h>
#include "main.h"

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

void printword(char word[])
{
	for (int i = 0; word[i] != '\0')
	{
		_putchar(word[i]);
	}	
}
